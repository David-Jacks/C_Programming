#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/******
*main - where program starts execution
*return: always return 0 for success
*/

int main(void)
{
    /**Declaring and initializing variables**/
    double princ_pal, Int_rest, final_balance, int_rate;
    int  times_compounded; 

    /**Taking inputs from users**/
    printf("Please input principal: ");
    scanf("%lf", &princ_pal);

    printf("Please input interest rate: ");
    scanf("%lf", &int_rate);

    printf("Please input number of times interest was compounded: ");
    scanf("%d", &times_compounded);

    /**Undertaking needed computing calculations**/
    final_balance = princ_pal * pow((1 + (int_rate / 100) / times_compounded), times_compounded);
    Int_rest = final_balance - princ_pal;

    /**Displaying inputs to users**/
    printf("Interest Rate:\t\t%11.2lf%%\n", int_rate);
    printf("Times Compounded:\t%11d\n", times_compounded);
    printf("Principal:\t\t$%10.2lf\n", princ_pal);
    printf("Interest:\t\t$%10.2lf\n", Int_rest);
    printf("Final balance:\t\t$%10.2lf\n", final_balance);

    return (0);
}