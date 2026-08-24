// Q30: Write a program to reverse a given number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/

#include<stdio.h>
int main() {

    int n, reverse = 0, rem;
    printf("enter num:");
    scanf("%d", &n);

    while (n != 0) {
        rem = n % 10;
        reverse = reverse * 10 + rem;
        n = n / 10;
    }

    printf("%d", reverse);

    return 0;
}