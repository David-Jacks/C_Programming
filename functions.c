#include <stdio.h>
#define NAME "David Jackson, Inc."
#define ADDRESS "GREATER ACCRA- GHANA"
#define TELE "055746921"
#define WIDTH 40

void our_line(void){

	for(int i = 0; i <= WIDTH; i++){
	printf("-");
	}
 	
	printf("\n");
}

int main(void){
	our_line();
	                  
	printf("%s\n", NAME);
	printf("%s\n", ADDRESS);
	printf("%s\n", TELE);
        
	our_line();	
return 0;
}



