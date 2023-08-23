#include <stdio.h>
#include <stdlib.h>
#include "david.h"
/**
 * main - function exection starts
 *
 * Return: returns 0 for success
 */

/*
 * Write a C program that defines a function swap which takes two integer pointers as parameters 
 * and swaps the values of the integers they point to. 
 * Use this function to swap the values of two integers in the main function and print the swapped values.
 *
 * */

int main(void)
{
	int a = 4;
	int b = 6;
	swap(&a, &b);

	printf("a is:%d, and b is:%d\n", a, b);
	return (0);
}

void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
