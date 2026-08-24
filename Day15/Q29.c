// Q29: Write a program to calculate the factorial of a number.

/*
Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

*/

#include<stdio.h>
int main() {

    int n, i = 1, factorial = 1;
    printf("enter n:");
    scanf("%d", &n);

    while (i<=n) {
        factorial = factorial * i;
        i++;
    }

    printf("%d", factorial);

    return 0;
}