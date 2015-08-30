/*
Name: Wesley Kepke
Class: CS 460 (Compiler Construction)
Assignment: Write a bubble sort program.
Last Modified: August 30, 2015
Dute Date: August 31, 2015
*/
#include <stdio.h> 
#include <stdlib.h> // for randomly populaing integer array 

#define NUM_ELEMENTS 10
#define RANDOM_MAX 100
#define TRUE 1
#define FALSE 0

void swap(int* dest, int* src) {
	int temp = *dest;
	*dest = *src;
	*src = temp;
}

void bubbleSort(int* arr, int arrLength) {
	int swapped = FALSE;
	int i = 1;   
	do {
		swapped = FALSE; 
		for(i = 1; i < arrLength; i++) {
			if(arr[i-1] > arr[i]) {
				swap(&arr[i-1], &arr[i]);
				swapped = TRUE; 
			}
		}
	} while(swapped == TRUE); 
}

int main(void) {
	int* testArr = malloc((NUM_ELEMENTS + 1) * sizeof(int)); 
	int i = 0;
	srand(time(NULL)); 

	if(testArr == NULL) {
		printf("%s\n", "Malloc failed, unable to proceed.");
	}
	
	else {
		printf("%s\n", "Before bubble sort:"); 
		for(i = 0; i < NUM_ELEMENTS; i++) {
			testArr[i] = rand() % RANDOM_MAX;
			printf("%d    ", testArr[i]);  
		}
		testArr[NUM_ELEMENTS] = '\0'; 	
		bubbleSort(testArr, NUM_ELEMENTS);
		printf("\n%s\n", "After bubble sort:");
		for(i = 0; i < NUM_ELEMENTS; i++) {
			printf("%i    ", testArr[i]); 
		}
		printf("\n");
		free(testArr);
		testArr = NULL;  
	}

	return 0; 
}