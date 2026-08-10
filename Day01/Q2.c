// Write a program to input two numbers and display their sum, difference, product, and quotient.


#include<stdio.h>
int main () {

    int a,b;
    printf("Enter a :");
    scanf("%d", &a);

    printf("Enter b:");
    scanf("%d", &b);
    
    printf("Sum = %d\n", a+b);
    printf("Diff = %d\n", a-b);
    printf("Product = %d\n", a*b);
    printf("Quotient = %d\n", a/b);


    return 0;
}