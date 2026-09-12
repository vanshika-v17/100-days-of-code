/*
Q65: Search in a sorted array using binary search.

Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1


*/

#include <stdio.h>

int main()
{
    int n, a[100], x, low, high, mid;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &x);

    low = 0;
    high = n - 1;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(a[mid] == x)
        {
            printf("Found at index %d", mid);
            return 0;
        }

        if(a[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    }

    printf("-1");

    return 0;
}