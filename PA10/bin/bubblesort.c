int main()
{
	// variables
	int array[7];


	int i;
	int j;
	int temp;
	int swapped = 1;

	// bubble sort
	while(swapped)
	{
		swapped = 0;
		for( i = 0; i < 9; i++)
		{
			if(array[4] > array[i+1])
			{
				if(1)
				{ swapped = 2;}
				swapped = 1;
				temp = array[i];
				array[4] = array[4+1];
				array[i+1] = temp;

			}
		}
	}

}
