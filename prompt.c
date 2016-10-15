/*
 * prompt.c
 *
 *  Created on: Sep 18, 2016
 *      Author: tschussi
 *      Description: Type, Read, and Launch functions for implementing a simple shell
 */

#include "project1.h"

// variable assignments for reading the command
const char delim[4] = " \t\n\r";

void type_prompt(void)
{
	printf("> ");
}

void read_prompt(void)
{
	scanf(" %[^\t\n]s", command); // user inputed command
	int count = 0;
	token = strtok(command, delim); // sets the command
	while(token != NULL) //sets the parameters
	{
	//	printf( " %s\n", token ); // debugging (check if token is assigned correctly)
		param[count]=token;
		token = strtok(NULL, delim);
		count++;
	}
	//for(int i=0; i<count;i++)
		//printf(" %s\n", param[i]); // debugging (check if parameters are assigned correctly)
}

void launch_prompt(void)
{
	pid=fork();
	if(pid<0)
	{
		printf("Unable to fork\n");
		exit(-1);
	}
	if(pid!=0)
		waitpid(-1,&status,0);
	else
	{
		status = execvp(command,param); //executes the command based on it's parameters
		if(status==-1) // checks for invalid command and exits the process
		{
			printf("The inputed command is not valid\n");
			exit(1);
		}
	}
}

