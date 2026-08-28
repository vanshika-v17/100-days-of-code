// Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/

#include<stdio.h>
int main() {
    int a, b, lcm;

    printf("enter n:");
    scanf("%d %d", &a, &b);

    if (a > b)
        lcm = a;
    else 
        lcm = b;

    while (1)
    {
        if (lcm % a == 0 && lcm % b == 0)
        {
            printf("%d", lcm);
            break;
        }
        lcm++;
    }
  
    return 0;
}