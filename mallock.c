#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *p = (int *)malloc(3 * sizeof(int));
    p[0] = 45;
    p[1] = 89;
    p[2] = 67;
    p = (int *)realloc(p, 5 * sizeof(int));
    p[3] = 65;
    p[4] = 98;
    for (int i = 0; i <= 5; i++)
        printf(" %d", p[i]);
    free(p);
}