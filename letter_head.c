#include <stdio.h>
#define NAME "The BlocV"
#define ADDRESS "Blocv@largeorg.com"
#define PLACE "Africa, Ghana branch"
#define WIDTH 50

void starbar_();
int main(void){
	starbar_();
	 
	printf("%s\n", NAME);
	printf("%s\n", ADDRESS);
	printf("%s\n", PLACE);
	
	starbar_();

return 0;
}

void starbar_(){

	printf("\n");
	for(size_t i = 0; i <= WIDTH; i++){
	printf("*");
	}
	
	printf("\n");

}
