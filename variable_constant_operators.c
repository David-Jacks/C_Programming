#include <stdio.h>

//question1
void swap(int *, int *);
int main(void){
	int first_input;
	int last_input;
	
	printf("please enter your first value\n");
	scanf("%d", &first_input);

	printf("please enter your second value\n");
	scanf("%d", &last_input);
	
	printf("interger %d and %d,", first_input, last_input);
	swap(&first_input, &last_input);


	printf("has been swapped to %d and %d.\n", first_input, last_input);


	//question2

	int x;
	int y;
	printf("input number:\n");
	scanf("%d", &x);
	printf("input number:\n");
	scanf("%d", &y);
	
	x = x ^ y;
	y = x ^ y;
	x = x ^ y;

	printf("x is now %d and y is %d\n", x, y);
}

	
void swap(int * a, int * b){
		int temp = *a;
		*a = *b;
		*b = temp;		
	}



	
