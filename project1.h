/*
 * project1.h
 *
 *  Created on: Sep 18, 2016
 *      Author: tschussi
 *      Description: Directory for variables and functions used in making a basic shell
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

int count; // used for assigning parameters
char command[256]; // hold the written in command of the user
char *token; // separates the user input into a command and its parameters
char *param[128]; // holds the command arguments
int status;
pid_t pid;
void type_prompt(void); //user inputed command
void read_prompt(void); // reads the command and it's parameters
void launch_prompt(void); // loads the command and parameters into the argv in order to execute
