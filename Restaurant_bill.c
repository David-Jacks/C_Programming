#include <stdio.h>
#include <stdlib.h>
/******
*main - where program starts execution
*return: always return 0 for success
*/

int main(void)
{
    /**Declaring and initializing variables**/
    double meal_charge = 44.50, tax_amt, tip_amt, total_bill;

    /**Undertaking needed computing calculations**/
    tax_amt = (6.75 / 100) * meal_charge;
    tip_amt = (15.0 / 100) * (meal_charge + tax_amt);
    total_bill = tax_amt + tip_amt + meal_charge;

    /**Displaying inputs to users**/
    printf("The meal cost is: \t$%.2f\n", meal_charge);
    printf("The tax amount is: \t$%.2f\n", tax_amt);
    printf("The tip amount is: \t$%.2f\n", tip_amt);
    printf("The total bill is: \t$%.2f\n", total_bill);

    return (0);
}