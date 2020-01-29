#include <stdio.h> // importing library

// calling functions
int* sortArray(int arr[], int sizevvv);
char* sortCharArray(char arr[], int size);
int* sortDescendingArray(int arr[], int size);
char* sortCharArrayDescending(char arr[], int size);

int main()                        //default function for call
{ 
	int size = 0, i, j, sizeCharArray;
	int m[] = { 2,4,1,5,8,9,10 };
	char c[] = { 'a', 'c', 'e', 'b', 'd', 'f'};
	int* arr = 0;
	char string[100];
	char* cArr = 0;

	size = sizeof(m) / sizeof(m[0]);
	printf("Length of integer array is: %d", size);

	printInArray(arr, m, size); // calling int function in ascending order
	printIntDescendingOrder(arr, m, size); // calling int arr in descending order


	sizeCharArray = sizeof(c) / sizeof(c[0]);
	printf("\n\nLength of char array is : %d ", sizeCharArray);
	
	printCharArray(cArr, c, sizeCharArray); // calling char function in ascending order
	printDescendingCharArray(cArr, c, sizeCharArray); // calling char function in descending order

	printf("\nEND of program");
} // end of main

// function to call sortCharArray in ascending order
printCharArray(char* array, char cValue[], int arrayCharSize) {
	array = sortCharArray(cValue, arrayCharSize); // declaring function

	printf("\nPrint Char Size in Order: "); // printing message

	for (int i = 0; i < arrayCharSize; i++)	// loop for printing array data after sorting
	{
		printf(" %c ", array[i]);
	}
}

// function to call sortCharArray in descending order
printDescendingCharArray(char* array, char cValue[], int arrayCharSize) {
	array = sortCharArrayDescending(cValue, arrayCharSize); // declaring function

	printf("\nPrint Char Size in descending order: "); // printing message

	for (int i = 0; i < arrayCharSize; i++)	// loop for printing array data after sorting
	{
		printf(" %c ", array[i]);
	}
}

// code for sortCharArray in ascending order
char* sortCharArray(char arr[], int size)
{
	int i, j, temp;	// variables

	for (int i = 0; i < size; i++)                     // loop for putting it in ordering
	{
		for (int j = 0; j < size; j++)             // loop for comparing other values
		{
			if (arr[j] > arr[i])                // comparing the array elements in order
			{
				char temp = arr[i];         // using temporary variable for storing last value
				arr[i] = arr[j];            // replacing value
				arr[j] = temp;             // storing last value
			}
		}
	}

	return arr;

}

char* sortCharArrayDescending(char arr[], int size)
{
	int i, j, temp;	// variables

	for (int i = 0; i < size; i++)                     // loop for putting it in ordering
	{
		for (int j = 0; j < size; j++)             // loop for comparing other values
		{
			if (arr[j] < arr[i])                // comparing the array elements in order
			{
				char temp = arr[i];         // using temporary variable for storing last value
				arr[i] = arr[j];            // replacing value
				arr[j] = temp;             // storing last value
			}
		}
	}

	return arr;

}

// function to call sorrtArray in ascending order
printInArray(int* array, int mValue[], int arraySize) {

	array = sortArray(mValue, arraySize);		// declaring function

	printf("\nPrint Interger in ascending order : ");                     // printing message

	for (int i = 0; i < arraySize; i++)         // loop for printing array data after sorting
	{
		printf(" %d ", array[i]);
	}

}

// function to call int array in descending order
printIntDescendingOrder(int* array, int mValue[], int arraySize) {

	array = sortDescendingArray(mValue, arraySize);		// declaring function

	printf("\nPrint Interger in descending order : ");                     // printing message

	for (int i = 0; i < arraySize; i++)         // loop for printing array data after sorting
	{
		printf(" %d ", array[i]);
	}

}

// function code for sortArray in ascending order
int* sortArray(int arr[], int size)
{
	int i, j, temp;	// variables

	for (int i = 0; i < size; i++)                     // loop for putting it in ordering
	{
		for (int j = 0; j < size; j++)             // loop for comparing other values
		{
			if (arr[j] > arr[i])                // comparing the array elements in order
			{
				int temp = arr[i];         // using temporary variable for storing last value
				arr[i] = arr[j];            // replacing value
				arr[j] = temp;             // storing last value
			}
		}
	}

	return arr;
}

// function code for sortArray in descending order
int* sortDescendingArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)                     // loop for putting it in ordering
	{
		for (int j = 0; j < size; j++)             // loop for comparing other values
		{
			if (arr[j] < arr[i])                // comparing the array elements in order
			{
				int temp = arr[i];         // using temporary variable for storing last value
				arr[i] = arr[j];            // replacing value
				arr[j] = temp;             // storing last value
			}
		}
	}
	return arr;


}