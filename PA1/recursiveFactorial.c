/*
Name: Wesley Kepke
Class: CS 460 (Compiler Construction)
Assignment: Write a recursive factorial program.
Last Modified: August 30, 2015
Dute Date: August 31, 2015
*/
#include <stdio.h>

int fact(int num) {
	if(num == 0) {
		return 1; 
	}
	else {
		return num * fact(num - 1); 
	}
}

int main(void) {
	int userInput = 0;
	int result = 0; 

	printf("Enter a number to calculate the factorial: ");
	scanf("%i", &userInput);
	result = fact(userInput);
	printf("Factorial of %i is %i.\n", userInput, result);
	return 0; 
}