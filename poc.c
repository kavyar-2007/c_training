// write c function which will expect only one parameter or and returns the perimeters of circle declare pi as constant//
#include <stdio.h>
float perimeter(int r)
{
    const float pi = 3.14;
    float peri = 2 * pi * r;
    return peri;
}
void main()
{
    int r = 8;
    printf("%f", perimeter(r));
}