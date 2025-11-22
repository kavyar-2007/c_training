// write a c  program adding three numbers using call by reference//
#include <stdio.h>
void add(int *a, int *b, int *c)
{
    int add = ((*a) + (*b) + (*c));
    printf("%d\n", add);
}
void main()
{
    int a = 43;
    int b = 89;
    int c = 97;
    add(&a, &b, &c);
}
