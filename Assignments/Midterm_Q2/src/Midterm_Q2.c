/*
 ============================================================================
 Name        : Midterm_Q2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void) {
	int user_input;

	printf("\nEnter the number : ");
	fflush(stdout);fflush(stdin);
	scanf("%d", &user_input);

	printf("\n\nSquare root of %d is %lf " ,user_input, sqrt(user_input));


	return 0;
}
