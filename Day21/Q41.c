// Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/

#include<stdio.h>
int main() {
    int n, temp, first, last, digits = 0;
    int middle, power = 1, result;

    printf("enter n");
    scanf("%d", &n);

    last = n % 10;

    temp = n;
    while (temp >= 10) {
        temp = temp / 10;
        digits++;
    }
    first = temp;

    temp = n;
    while(digits > 0) {
        power = power * 10;
        digits--;
    }

    middle = (n % power) / 10;

    result = last * power + middle * 10 + first;

    printf("%d", result);
    
    return 0;
}