#include <stdio.h>
#include <stdlib.h>

/**
 * main - function exection starts
 *
 * Return: returns 0 for success
 */
/*
 * Declare an integer variable num and assign it a value of 42. Then, declare a pointer variable ptr and make it point to the memory address of num. Print both the value of num and the value pointed to by ptr.*/

int main(void)
{
	int num = 42;
	int *ptr = &num;

	printf("num is:%d and value pointed to is %d\n", num, *ptr);
	return (0);
}
