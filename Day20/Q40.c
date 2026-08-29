// Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/

#include<stdio.h>
int main() {
    long long binary, digit, reverse = 0, place = 1;

    printf("enter binary:");
    scanf("%lld", &binary);

    while (binary > 0) {
        digit = binary % 10;

        if (digit == 0)
            digit = 1;
        else
            digit = 0;

        reverse = reverse + digit * place;
        place = place * 10;
        binary = binary / 10;
    }

    printf("%lld", reverse);
    
    return 0;
}