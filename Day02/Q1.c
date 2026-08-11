// Write a program to calculate the area and perimeter of a rectangle given its length and breadth.


#include<stdio.h>
int main() {

    int length;
    int breadth;
    

    printf("enter length :");
    scanf ("%d",& length);

    printf("enter breadth");
    scanf("%d", & breadth);
    
    int p = 2*(length + breadth);

    printf("Area = %d\n", length*breadth);
    printf("Perimeter = %d\n", p);

    return 0;
}

