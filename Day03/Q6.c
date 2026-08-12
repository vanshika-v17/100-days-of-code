// Q6 Write a program to swap two numbers using a third variable.

#include<stdio.h>

int main () {

    int a,b,v;

    printf("enter a :");
    scanf("%d", &a);

    printf("enter b");
    scanf("%d", & b);

    v = a;
    a = b;
    b = v;
     
    printf("After swap : %d  %d \n", a,b);


    return 0;
}