/*
 ============================================================================
 Name        : Midterm_Q9.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void) {

	char name[100];
	int i,j;
	printf("Enter your name :  ");
	fflush(stdout);fflush(stdin);
	gets(name);

	for(i=0 ; i<strlen(name) ; i++){
		if(name[i] == ' '){
			printf("%s ", &name[i+1] );
			for(j=0 ; j<i ;j++){
				printf("%c", name[j] );}
			break;
		}
		else{continue;}

	}


	return 0;
}
