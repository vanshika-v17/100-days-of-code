// Write a program to swap two numbers without using a third variable.

#include<stdio.h>
int main () {
    
    int a,b;

    printf("enter a & b :");
    scanf("%d %d", &a, &b);

    a = a - b;
    b = a + b;
    a = b - a;

    printf("After swap : %d  %d\n",a , b );

    return 0;
}