// Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

/*
Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene

*/

#include<stdio.h>
int main() {

    //a,b,c are the sides of the triangle.
    int a,b,c;    
    printf("enter a b c :");
    scanf("%d %d %d", &a, &b, &c);

    if ( a == b && b == c)
        printf("Equilateral\n");
    else if ( a != b && b != c && a != c)
        printf("Scalene\n");
    else 
        printf("Isosceles\n");

    return 0;
}