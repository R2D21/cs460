#include <stdio.h>

int main()
{
	// variables
	int num = 10;
	int fact;
	fact = num;
	int i;

	// solve factorial
	for( i = 1; i < num; i++)
	{	
		fact *= i;
	}

	printf("%d \n", fact );
	return 0;
}