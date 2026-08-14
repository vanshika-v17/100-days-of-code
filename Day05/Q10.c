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

    int total_seconds, hours, minutes,seconds, remaining_seconds;
    printf("total_seconds:");
    scanf("%d", &total_seconds);

    hours = total_seconds / 3600;
    remaining_seconds = total_seconds % 3600;
    minutes = remaining_seconds / 60;
    seconds = remaining_seconds % 60;

    printf("%d:%d:%d\n", hours, minutes, seconds);

    return 0;
}