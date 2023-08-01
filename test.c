#include <stdio.h>

void String_(int size_);
int main(){	
	char my_arr[] = {'D', 'a', 'v', 'i', 'd'};
	int size_ = 0;
	printf("my name is ");

	for(size_t i = 0; i < 5; i++){
		printf("%c", my_arr[i]);
	}

	printf("\n");

	printf("please what is the lenght of your");
	printf("name(firsname + lasname):");
	scanf("%d", &size_);

	printf("\n");

	printf("please write your name in the format:");
	printf("(firstname lastname)\n");
	String_(size_);
return 0;
}

void String_(int size_){

	size_ = size_ + 2;
	char arr_[size_];

	for(int i = 0; i < size_; i++){
		scanf("%c", &arr_[i]);
	}
	
	printf("your name is: ");

	for(int j = 0; j < size_; j++){
		printf("%c", arr_[j]);
	}

	printf("\n");
}
