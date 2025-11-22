#include <stdio.h>
enum days
{
    monday,
    tuesday,
    wedensday,
    thursday
};
void main()
{
    enum days day;
    day = thursday;
    printf("%d", day);
}