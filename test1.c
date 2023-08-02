#include <stdio.h>

int main(void){
	/*Dealing with hexadecimal and octal representations in c*/
	char hex_ = '\x16';
	char octa_ = '\020';
       
	int hex_int  = 16;
	int octa_int = 16;

	printf("hexadecimal of 16 is x10  \n");
        printf("octal value of 16 is 020 \n");
	
	/*Dealing with Array declaration and initialization in c*/
	int i;
	int my_arr[] = {4, 5, 57, 7, 87, 8};//this is an initialized array whose size is counted by the compiler
	int new_arr[8] = {1, 2, 5, 8, 7, 9, 7};//this is an initialized array with a defined size;
	int empt_arr[8]; //this is a declarize array
	
	printf("this is printing my_arr\n");
	for(i = 0; i < sizeof(my_arr)/sizeof(my_arr[0]); i++){
		printf("%d \n", my_arr[i]);
	}
	
	printf("this is printing my_arr\n");

	for(i = 0; i < 8; i++){
		printf("%d \n", new_arr[i]);
	}
	printf("this is printing empt_arr\n");

	for(i = 0; i < 8; i++){
		printf("%d \n", empt_arr[i]);
	}	
return 0;
}
