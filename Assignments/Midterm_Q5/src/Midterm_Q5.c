/*
 ============================================================================
 Name        : Midterm_Q5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void check_ones(int x);

int main(void) {

	int user_input ;

	printf("\nEnter the number : ");
	fflush(stdout);fflush(stdin);
	scanf("%d", &user_input);

	check_ones(user_input);
	return 0;
}

void check_ones(int x){
	int i,k,j;
	int count =0 ;

		for(i=0 ; i < 32; i++){
			k= x>>i;
			for(j=1;j<32;j++){
				k &= ~(1<<j);
			}
			if(k==1){count++ ;}
			else{continue;}
		}


	printf("\nNumber of ones is :  %d",count);
}
