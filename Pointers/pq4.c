#include <stdio.h>
#include <stdlib.h>

/**
 * main - function exection starts
 *
 * Return: returns 0 for success
 */

/*
 * Declare an integer variable num, and then declare a pointer ptr that points to the memory address of num. 
 * After that, declare a pointer to a pointer ptr_to_ptr that points to the memory address of the ptr pointer. 
 * Finally, print the value of num using the ptr_to_ptr double pointer.
 *
 * */

int main(void)
{
	int num;
	int *ptr = &num;
	int *ptr_to_ptr = &ptr;

	printf(" value of num is %d\n", **ptr_to_ptr);
	return (0);
}
