/*
 ============================================================================
 Name        : Midterm_Q8.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int array[] = {1,2,3,4,5,6};
	int size = sizeof(array)/sizeof(array[0]);
	int i=0;
	int j=size-1;
	int temp;

	printf("\nThe original array is ");
	for (i=0 ; i <size ; i++){
		printf(" %d ",array[i]);
	}
	for (i=0; i<size/2 ; i++,j--){
		temp = array[i];
		array[i]=array[j];
		array[j]=temp;
	}
	printf("\nThe reversed array is ");
	for (i=0 ; i <size ; i++){
		printf(" %d ",array[i]);
	}
	return 0;
}
