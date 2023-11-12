#include <stdio.h>
#include <stdlib.h>
/******
*main - where program starts execution
*return: always return 0 for success
*/

int main(void)
{
    /**Declaring and initializing variables**/
    int energy_drink_per_week, citrus_flavored_energy_drinks, total_customers = 12467;
    
    /**Undertaking needed computing calculations**/
    energy_drink_per_week = (14 / 100.0) * total_customers;
    citrus_flavored_energy_drinks = (64 / 100.0) * energy_drink_per_week;

    /**Displaying inputs to users**/
    printf("The approximate number of customers in the survey who purchased one or mpore energy drinks per week is %d\n", energy_drink_per_week);
    printf("The approximate number of customers in the survey who prefer citrus flavored energy drinks is %d\n", citrus_flavored_energy_drinks);

    return (0);
}