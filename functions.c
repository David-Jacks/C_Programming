#include <stdio.h>

int is_prime(int)
int main(void){

return 0;
}

int is_prime(int a){
	for(int i = 2; i < a; i++){
		if(a % i == 0){
			return 1;
		}
	}
	   

return 0;	
}
