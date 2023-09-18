/*
 ============================================================================
 Name        : Midterm_Q4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int user_input, i ;

	printf("\nEnter the number : ");
		fflush(stdout);fflush(stdin);
		scanf("%d", &user_input);

		printf("\n\nThe reverse of %d is :   ",user_input);
		for(i=0 ; i<31 ;i++){
					if (user_input/10 != 0){
						printf("%d",user_input%10);

						user_input /= 10 ;
					}
					else{
						printf("%d",user_input%10);
						break;
					}
				}





	return 0;
}
