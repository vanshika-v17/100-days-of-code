// Q27: Write a program to print the sum of the first n odd numbers.

/*
Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/

#include<stdio.h>
int main() {

    int n, i = 1, odd = 1, sum = 0;

    printf("enter n: ");
    scanf("%d", &n);

    while (i <=n ) {
        sum = sum + odd;
        odd = odd + 2;
        i++;
    }

    printf("%d", sum);

    return 0;
}