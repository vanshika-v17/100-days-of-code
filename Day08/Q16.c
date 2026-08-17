// Q16: Write a program to input three numbers and find the largest among them using if–else.

/*
Sample Test Cases:
Input 1:
3 7 5
Output 1:
Largest is 7

Input 2:
-1 -5 0
Output 2:
Largest is 0

*/

#include<stdio.h>
int main () {

    int x,y,z;
    printf(" enter x y z ");
    scanf("%d %d %d", &x , &y , &z);

    if (x >= y && x >= z) {
        printf("Largest is %d\n", x);
    }
    else if (y >= x && y >= z)
    {
        printf("Largest is %d\n", y);
    }
    else {
        printf("Largest is %d\n", z);
    }
    return 0;
}