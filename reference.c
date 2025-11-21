#include <stdio.h>
void sum_value(int a, int b)
{
    int sum = a + b;
    printf("%d\n", sum);
}
void sum_ref(int *a, int *b)
{
    int sum = *a + *b;
    printf("%d\n", sum);
}
void main()
{
    int a = 56;
    int b = 90;
    sum_value(a, b);
    sum_ref(&a, &b);
}
