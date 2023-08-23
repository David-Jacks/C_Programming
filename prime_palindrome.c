#include <stdio.h>
#include <stdlib.h>
/**
 *main - execution starts from here
 *
 *Return: return 0 for success
 */
int is_prime(int);
int pallindrome(int);
int main(void)
{
	int N;

	printf("please input your number\n");
	scanf("%d", &N);
	if (is_prime(N) && pallindrome(N))
		printf("yes it is prime pallindrome\n");
	else
		printf("No it is not prime pallindrom\n");
	return (0);
}

int pallindrome(int N)
{
	int original = N;
	int ans = 0;
	int ans1 = 0;

	while (N != 0)
	{
		ans1 = N % 10;
		N = N / 10;
		ans = (ans * 10) + ans1;
	}
	if (ans == original)
		return (1);
	return (0);
}

int is_prime(int N)
{
	int i;

	for (i = 2; i < N; i++)
	{
		if (N % i == 0)
		{
			return (0);
		}
	}
	return (1);
}
