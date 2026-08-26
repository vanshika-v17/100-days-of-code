// Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/

#include<stdio.h>
int main() {
    int n, i = 2, prime = 1;
    printf("enter n:");
    scanf("%d", &n);

    if (n <= 1) 
    {
        printf("Not prime\n");
    }
    else {
        while (i < n) {
            if ( n % i == 0) {
                prime = 0;
                break;
            }
            i++;
        }

        if (prime == 1)
            printf("Prime\n");
        else 
            printf("Not prime\n");

    }
            
    return 0;
}