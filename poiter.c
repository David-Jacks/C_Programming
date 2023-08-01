#include <stdio.h>

void interchange(int * u, int * v);
int main(void){
	
	int x = 4;
        int y = 9;	
	int z = 20;
	
	int * ptr = &z;

	int f = *ptr;

	printf("z = %d, and f = %d\n", z, f);

	printf("first x = %d, and y = %d\n", x, y);

	interchange(&x, &y);

	printf("now x = %d, and y =%d\n", x , y);
}

void interchange(int * u, int * v){
	int temp = *u;
	 *u = *v;
	 *v = temp;
}
