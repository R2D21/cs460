/*
Name: Wesley Kepke
Class: CS 460 (Compiler Construction)
Assignment: Write an iterative factorial program.
Last Modified: August 30, 2015
Dute Date: August 31, 2015
*/
#include <stdio.h>

int main(void) {
	int userInput = 0; 
	int result = 1; // buffer will overflow for large integers  
	int i = 1; 

	printf("Enter a number to calculate the factorial: ");
	scanf("%i", &userInput);
	for(i = 1; i <= userInput; i++) {
		result *= i; 
	}
	printf("Factorial of %i is %i.\n", userInput, result);
	return 0; 
}