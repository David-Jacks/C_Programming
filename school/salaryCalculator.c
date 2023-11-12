#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    float grosPay, rate;
    int hrsWorked;

    printf("enter #hours worked(-1 to end) :\n");
    scanf("%d", &hrsWorked);

    while(hrsWorked != -1)
    {     
        printf("enter hourly rate($0.00) :\n");
        scanf("%f", &rate);

        hrsWorked > 40 ? (grosPay = (hrsWorked - 40) * (1.5 * rate) + (40 * rate)) : (grosPay = hrsWorked * rate);

        printf("salary is $%.2f\n", grosPay);

        printf("enter #hours worked(-1 to end) :\n");
        scanf("%d", &hrsWorked);
    }
    return (0);    
}

