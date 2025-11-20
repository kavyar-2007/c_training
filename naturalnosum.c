#include <stdio.h>
void main()
{
    int result = 0;
    int n;
    printf("enter n:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        result = result + i;
    }
    printf("sum is %d", result);
}
