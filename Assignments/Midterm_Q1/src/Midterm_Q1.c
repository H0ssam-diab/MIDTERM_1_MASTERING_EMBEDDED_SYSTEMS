/*
 ============================================================================
 Name        : Midterm_Q1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int user_input ,i,sum ;
		printf("\nEnter the number : ");
		fflush(stdout);fflush(stdin);
		scanf("%d", &user_input);

		sum=0;
		for(i=0 ; i<31 ;i++){
			if (user_input/10 != 0){
				sum += (user_input%10) ;
				user_input /= 10 ;
			}
			else{
				sum += (user_input%10);
				printf("\n The sum of the %d digits is %d",i,sum);
				break;
			}
		}



	return 0;
}
