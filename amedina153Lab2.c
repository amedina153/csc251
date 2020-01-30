/*
Alexander Medina
CSC 251-80
Lab #2
1/28/2020
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int magicNumber = 9, addMagical, multiplyMagical, subtractMagical;
	int userInput;

	printf("Enter a number between 1 through 10: ");
	scanf("%d", &userInput);

	while(userInput <=0 || userInput > 10)
	{
	printf("You chose %d, you must choose a number between 1 through 10: ", userInput);
	scanf("%d", &userInput);
	}

	addMagical = userInput + magicNumber;
	multiplyMagical = userInput * magicNumber;
	subtractMagical = userInput - magicNumber;

	printf("%d + Magic Number = %d. \n", userInput, addMagical);
	printf("%d * Magic Number = %d. \n", userInput, multiplyMagical);
	printf("%d - Magic Number = %d. \n", userInput, subtractMagical);

	printf("What is the magic number? ");
	scanf("%d", &userInput);

	if(userInput == magicNumber)
	{
		printf("Correct!");
	}
	else
	{
		printf("Incorrect!");
	}

	return EXIT_SUCCESS;
}
