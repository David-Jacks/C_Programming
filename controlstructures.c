/* You are designing a simple calculator application. Your task is to create a program that repeatedly takes user input for two numbers and an operator until the user decides to quit. The program should then perform the requested operation and display the result. Here are the steps you need to implement:

Display a menu of operations: "+", "-", "*", "/"
Prompt the user to enter two numbers.
Prompt the user to choose an operation from the menu.
Perform the selected operation on the two numbers.
Display the result.
Ask the user if they want to perform another calculation or quit.*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{	
	float num_1, miriam_num;
	char opera;/*this is the variable to store our operators*/
	float result;
	char end_calc;
	while (end_calc != 'n')
	{	
		printf("choose from this operators: \"+\", \"-\", \"*\", \"/\" \n");
		printf("enter number 1: ");
		scanf("%f", &num_1);
		printf("enter number 2: ");
		scanf("%f", &miriam_num);

		printf("specify your operation: ");
		scanf(" %c", &opera);
		if (opera == '+')
			result = num_1 + miriam_num;
		else if (opera == '-')
			result = num_1 - miriam_num;
		else if (opera == '/')
			result = num_1 / miriam_num;
		else if (opera == '*')
			result = num_1 * miriam_num;
		else 
			printf("invalid input");
		
		printf("the results of your calculation is: %f\n", result);
		printf("\n");
		printf("type 'y' if continue, and 'n' if quit\n");
		scanf(" %c", &end_calc);
	}
	
	return (0);
}
