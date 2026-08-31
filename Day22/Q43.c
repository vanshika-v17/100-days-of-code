// Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/

#include<stdio.h>
int main() {
    int n, original, digit;
    int sum = 0, fact, i;

    printf("enter n:");
    scanf("%d", &n);

    original = n;

    while (n > 0) 
    {
        digit = n % 10;

        fact = 1;

        for ( i = 1; i <= digit; i++)
        {
            fact = fact * i;
        }
        sum = sum + fact;
        n = n / 10;
    }
    if ( sum == original)
        printf("Strong number\n");
    else
        printf("Not strong number\n");

    return 0;
}