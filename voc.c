// write a c function which will expect three parameters l,b,h and returns volume of the cuboid //
#include <stdio.h>
int volume(int l, int b, int h)
{
    int voc = l * b * h;
    return voc;
}
void main()
{
    int l = 6, b = 4, h = 8;
    printf("%d", volume(l, b, h));
}
