//  write c function which will accpect an array, its size as n, returns the difference between elements //
#include <stdio.h>
#include <stdlib.h>
int subarr(int arr[], int n)
{
    int diff = (arr[0] - arr[n - 1]);
    return abs(diff);
}
void main()
{
    int arr[4] = {3, 7, 9, 8};
    int n = 6;
    printf("%d", subarr(arr, n));
}