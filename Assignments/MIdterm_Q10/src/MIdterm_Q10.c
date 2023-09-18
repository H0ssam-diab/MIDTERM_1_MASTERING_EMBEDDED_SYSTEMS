/*
 ============================================================================
 Name        : MIdterm_Q10.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int check_ones(int array[]);

int main(void) {

	int i, temp, u_in;
	int array[32];
	printf("\nEnter your number : ");
	fflush(stdout);fflush(stdin);
	scanf("%d", &u_in);

	temp = u_in;
	printf("\nThe binary representation (LSB >> MSB) : ");

	for(i=0; i < 32; i++,temp=u_in){
		temp |= (1<<i);
		if(temp == u_in){
			array[i]=1;
			printf("%d", 1);
		}
		else{
			array[i]=0;
			printf("%d", 0);
		}
	}

	printf("\n The MAX number of ones between two zeros is : %d ",check_ones(array));

	return 0;
}

int check_ones(int array[]){
	int i  ;
	int  c_temp;
	int  counter=0;


	for(i=0 ; i < 32 ; i++){
	if(array[i]==0){
			c_temp=0;
			while(array[++i]==1){
				c_temp++;
				if(c_temp>counter){
					counter= c_temp;
				}
			}
			continue;


		}
	else {continue;}

	}
return counter;

}


