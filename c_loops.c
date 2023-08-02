//question1
/*#include <stdio.h>

int main(void){
	int i;

	printf("Printing all even numbers between 1 and 20(inclusive):\n");

	for(i = 1; i <= 20; i++){
		if(i % 2 == 0){
			printf("%d\n", i);
		}	
	}
return 0;
}
*/
//question2

#include <stdio.h>
int fact(int);
int main(void){
	int n = 5;
	int j = n;
	while(n != 1){
	 	j *=(n - 1);
	   n--;	
	}
	printf("%d\n", j);

return 0;
}
/*
int fact(int n){
	if(n <= 1){
	  return;
	}

	return n * fact(n - 1);
}
*/
