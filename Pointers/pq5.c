#include <stdio.h>
#include <stdlib.h>

/**
 * main - function exection starts
 *
 * Return: returns 0 for success
 */

/*
 *Write a C program that takes an array of integers and its size as input from the user. 
  Implement a function that uses pointer arithmetic to reverse the elements of the array in-place, 
  meaning without using additional arrays. Print the reversed array after performing the reversal.
 *
 * */
void arr_rev_ptr(int arr[], int size);
int main(void)
{
	int size;
	int i = 0;
	int j;

	printf("input size of array:");
	scanf("%d", &size);
	getchar();
	int my_arr[size];

	j = size;
	printf("input array values up to the size as described above:");
	while (j != 0)
	{
		scanf("%d", &my_arr[i]);
		i++;
		j--;
	}
	arr_rev_ptr(my_arr, size);
	return (0);
}

void arr_rev_ptr(int arr[], int size)
{
	int *ptr = arr;
	int i;
	int k;
	int tmp;
	int j = size - 1;

	for (i = 0; i < size / 2; i++)
	{
		tmp = *(ptr + i);
		*(ptr + i) = *(ptr + j);
		*(ptr + j) = tmp;
		j--;
	}
	for (k = 0; k < size; k++)
	{
		printf("%d ",arr[k]);
		if (k == size - 1)
			putchar('\n');
	}
}
