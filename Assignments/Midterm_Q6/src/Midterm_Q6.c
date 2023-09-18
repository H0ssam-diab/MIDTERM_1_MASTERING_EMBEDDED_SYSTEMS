/*
 ============================================================================
 Name        : Midterm_Q6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int check(int array[],int size){
	int num = array[size-1];
	int i,counter =0;
	for(i=0; i<(size-1); i++){
		if(num==array[i]){
			counter++;
			array[i]=-1;
		}
		else{continue;}
	}
	if(counter==0){
		return num;
	}
	else{
		return check(array,size-1);
	}

}

int main(void) {
	int array[]={1,3,4,5,1,3,4};
	int size = sizeof(array)/sizeof(array[0]);
	printf("\nThe unique number in the array is :  %d",	check(array,size) );
	return 0;
}
