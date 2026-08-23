// Q28: Write a program to print the product of even numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
4
Output 1:
8 (2 * 4)

Input 2:
6
Output 2:
48 (2 * 4 * 6)

*/

#include<stdio.h>
int main() {

    int n, i = 2, product = 1;

    printf("enter n: ");
    scanf("%d", &n);

    while (i <= n) {
        product = product * i;
        i = i + 2;
    }

    printf("%d", product);

    return 0;
}
