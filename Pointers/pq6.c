#include <stdio.h>
#include <stdlib.h>

/**
 * main - function exection starts
 *
 * Return: returns 0 for success
 */

/*Write a C program that demonstrates dynamic memory allocation using the malloc function. 
 * The program should take the size of an integer array as input, dynamically allocate memory for the array, 
 * populate the array with values from 1 to N, and then print the array elements.
 * */

int main(void)
{
	int n;
	int i;
	int j;
	int *ptr;

	printf("input size of array:");
	scanf("%d", &n);
	getchar();
	ptr = malloc(n * sizeof(int));

	printf("please input array values to the specified size, don't forget to put spacs between values as you type:");
	for (i = 0; i < n; i++)
	{
		scanf("%d", (ptr + i));
	}

	for (j = 0; j < n; j++)
	{
		printf("%d", *(ptr + j));
		if (j == n - 1)
			putchar('\n');
		else
			putchar(' ');
	}
	free(ptr);
	return (0);
}
