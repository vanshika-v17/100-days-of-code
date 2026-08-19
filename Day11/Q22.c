// Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/

#include<stdio.h>
int main() {

    // here cp is cost price and sp is selling price 
    float cp, sp, percentage;
    printf("enter cp, sp:");
    scanf("%f %f", &cp, &sp);

    if ( sp > cp ) {

        percentage = ((sp - cp) / cp) * 100;
        printf("Profit %g%%\n", percentage);
    }
    else if ( cp > sp ) {
        percentage = ((cp - sp) / cp) * 100;
        printf("Loss %g%%\n", percentage);
    }
    else {
        printf("No Profit No Loss\n");
    }

    return 0;
}