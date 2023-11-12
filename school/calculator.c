#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/***
*main - where program execution starts
*Return: returns 0 for success
*
***/
int main(){
    // declaring and initializing variables
    bool my_flagg = true;
    char oper_tor;
    float oper_and1, oper_and2, ans;// make them a double type for decimal results

    // taking iputs from users
    // puts("note: allowed calculations are(+, -, /, *)");
    // printf("please enter your calculation: (eg. 2 + 5) ");
    // scanf("%f %c %f", &oper_and1, &oper_tor, &oper_and2);
    
    // processing
    while (my_flagg){

        puts("note: allowed calculations are(+, -, /, *)");
        printf("please enter your calculation: (eg. 2 + 5) ");
        scanf("%f %c %f", &oper_and1, &oper_tor, &oper_and2);

        if (oper_tor == '+')
        {
            ans = oper_and1 + oper_and2;
            my_flagg = false;
        } else if (oper_tor == '-')
        {
            ans = oper_and1 - oper_and2;
            my_flagg = false;
        } else if (oper_tor == '/')
        {
            ans = oper_and1 / oper_and2;
            my_flagg = false;
        } else if (oper_tor == '*')
        {
            ans = oper_and1 * oper_and2;
            my_flagg = false;
        } else 
        {
            puts("invalid calculation please try again");
        }
        
    }

    // displaying results
    printf("the results of your calculation is: %.2f\n", ans);  //results expected in decimal numbers are displayed as 0.

    return (0);
}