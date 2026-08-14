// Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/

#include<stdio.h>
int main() {

    int seconds, hours, minutes;
    printf("time in seconds :");
    scanf("%d", &seconds);

    hours = seconds/3600;
    seconds = seconds/60;
    
    










    return 0;
}