// Q36: Write a program to find the HCF (GCD) of two numbers.

/*
Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/

#include<stdio.h>
int main () {

    int a, b, small, hcf = 1;

    printf("enter n:");
    scanf("%d %d", &a, &b);

    if (a < b) 
        small = a;
    else 
        small = b;

    for (int i = 1; i <= small; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            hcf = i;
        }
    }
    printf("%d", hcf);

    return 0;
}