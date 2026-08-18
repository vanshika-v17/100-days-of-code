// Q17: Write a program to find the roots of a quadratic equation and categorize them.

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/

#include<stdio.h>
#include<math.h>
int main() {

    float a,b,c,D, root_1 , root_2 ;
    printf(" enter a, b, c :");
    scanf("%f %f %f", &a, &b, &c);

    D = b*b - 4*a*c;

    if (D>0) {
        root_1 = (-b + sqrt(D)) / (2*a);
        root_2 = (-b - sqrt(D)) / (2*a);
        printf("Roots are real and different: %g, %g\n",root_1, root_2);
    }
    else if (D == 0) {
        root_1 = -b / (2*a);
        printf("Roots are real and same: %g\n", root_1);
    }
    else {
        printf("Roots are complex\n");
    }

    return 0;
}