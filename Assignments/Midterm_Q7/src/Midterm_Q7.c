/*
 ============================================================================
 Name        : Midterm_Q7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int sum_fun(int x){
	int sum=0;
	sum += x;
	--x;
	if(x){
		sum += sum_fun(x);
	}
	else{
		return sum;
	}
	return sum;
}


int main(void) {
	int x =100;

	printf("The sum of 0 to 100 is :  %d ", sum_fun(x));



	return 0;
}
