#include <stdio.h>
#include <stdlib.h>

/**
 * main - function exection starts
 *
 * Return: returns 0 for success
 */

/* 
 *Consider the following array of integers: int numbers[] = {10, 20, 30, 40, 50};
 Declare a pointer variable ptr and make it point to the first element of the array.
 Using pointer arithmetic, print the value of the second element of the array (20) using the ptr pointer.
 *
 * */

int main(void)
{
	int numbers[] = {10, 20, 30, 40, 50};
	int *ptr = numbers;

	printf(" value of second element in array is %d\n", *(++ptr));
	return (0);
}
