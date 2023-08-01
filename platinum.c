#include <stdio.h> /*preprocessor directive*/

int main(void){
  float weight_, value_;
  
  printf("are you worth your weight in platinum?\nlet's check it out\n");
  
  printf("please enter your weight in pounds:(please input in decimal)");

  scanf("%f", &weight_);
  
  value_ = 1700.0 * weight_ * 14.5833;

  printf("your weight in platinum is $%.2f\n", value_);
  printf("you are easily worth that! if platinum drops,\n eat more to maintain your value\n");
  
  return 0;
}
