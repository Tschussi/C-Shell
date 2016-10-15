/*
 ============================================================================
 Name        : project1.c
 Author      : Kevin Hames
 Version     :
 Copyright   : Copyright 2016
 Description : Simple Shell in C
 ============================================================================
 */

#include "project1.h"

int main(int argc, char *argv[]) {
	while(1) {
	type_prompt();
	read_prompt();
	if(strcmp(command,"quit")==0) // exit programs
		exit(0);
	else
		launch_prompt();
	}
	return EXIT_SUCCESS;
}
