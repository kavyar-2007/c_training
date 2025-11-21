// write a function which will mutltiply 3 numbers and call it by reference//
#include <stdio.h>
void product(int *a, int *b, int *c)
{
    int prod = ((*a) * (*b) * (*c));
    printf("%d\n", prod);
}
void main()
{
    int a = 54;
    int b = 67;
    int c = 90;
    product(&a, &b, &c);
}