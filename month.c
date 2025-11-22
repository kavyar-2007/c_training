#include <stdio.h>
enum month
{
    jan = 1,
    feb,
    mar,
    apri,
    may,
    june,
    july,
    aug,
    sep,
    oct,
    nov,
    dec
};
void main()
{
    enum month m;
    m = mar;
    char *season;
    switch (m)
    {
    case dec:
    case jan:
    case feb:
        season = "winter";
        break;
    case mar:
    case apri:
    case may:
        season = "summer";
        break;
    case june:
    case july:
    case aug:
        season = "monsoon";
        break;
    case sep:
    case oct:
    case nov:
        season = "pring";
        break;
    }
    printf("%d month is %s", m, season);
}