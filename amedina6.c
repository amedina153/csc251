/*
Alexander Medina
Lab #: 6
2/23/20
*/

#include<stdio.h>
#include<stdlib.h>

int main (void)
{
	int firstArray [5] = {0,2,4,6,8}, secondArray[5] = {1,3,5,7,9};
	int i, temp, choose;
	printf("Before Swap\n");

	printf("firstArray[0] = %d, secondArray[0] = %d\n", firstArray[0], secondArray[0]);
	printf("firstArray[1] = %d, secondArray[1] = %d\n", firstArray[1], secondArray[1]);
	printf("firstArray[2] = %d, secondArray[2] = %d\n", firstArray[2], secondArray[2]);
	printf("firstArray[3] = %d, secondArray[3] = %d\n", firstArray[3], secondArray[3]);
	printf("firstArray[4] = %d, secondArray[4] = %d\n", firstArray[4], secondArray[4]);

	for(i = 0; i < 5; i++)
	{
		temp = firstArray[i];
		firstArray[i] = secondArray[i];
		secondArray[i] = temp;
	}
	printf("After Swap\n");

	printf("firstArray[0] = %d, secondArray[0] = %d\n", firstArray[0], secondArray[0]);
	printf("firstArray[1] = %d, secondArray[1] = %d\n", firstArray[1], secondArray[1]);
	printf("firstArray[2] = %d, secondArray[2] = %d\n", firstArray[2], secondArray[2]);
	printf("firstArray[3] = %d, secondArray[3] = %d\n", firstArray[3], secondArray[3]);
	printf("firstArray[4] = %d, secondArray[4] = %d\n", firstArray[4], secondArray[4]);

	return EXIT_SUCCESS;
}
