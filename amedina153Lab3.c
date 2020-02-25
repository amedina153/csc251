/*
Alexander Medina
Lab: 3
1/29/20
*/
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char check;
	int countA = 0, countB = 0, countC = 0, countD = 0, countF = 0, gpaNum = 0;
	double numA = 0.00, numB = 0.00, numC = 0.00, numD = 0.00, numF = 0.00, gpaTotal = 0.00;

	while(!(check == 'z'|| check == 'Z'))
	{
		printf("Enter a letter grade (Press z to Quit):");
		scanf(" %c", &check);

		switch(check)
		{
			case 'a':
				countA++;
				gpaNum++;
				numA = numA+4;
				break;
			case 'A':
				countA++;
				gpaNum++;
				numA = numA + 4;
				break;
			case 'b':
				countB++;
				numB = numB + 3;
				gpaNum++;
				break;
			case 'B':
				countB++;
				numB = numB + 3;
				gpaNum++;
				break;
			case 'c':
				countC++;
				numC = numC + 2;
				gpaNum++;
				break;
			case 'C':
				countC++;
				numC = numC + 2;
				gpaNum++;
				break;
			case 'd':
			case 'D':
				countD++;
				numD = numD + 1;
				gpaNum++;
				break;
			case 'f':
				countF++;
				gpaNum++;
				break;
			case 'F':
				countF++;
				gpaNum++;
				break;
			case 'z':
				break;
			case 'Z':
				break;
			case '\n':
				break;
			default:
				printf("Incorrect Input \n");
				break;
		}
	}

	printf("There are %d A's, %d B's, %d C's, %d D's, and %d F's. \n", countA, countB, countC, countD, countF);

	gpaTotal = (numA + numB + numC + numD + numF)/(gpaNum);

	printf("The class average is %f", gpaTotal);

	return EXIT_SUCCESS;
}
