#include <stdio.h>
#include <string.h>
void main()
{
    char name[50] = "kavya";
    char new[100] = "harshitha";
    printf("%c", name[9]);
    printf("length of string is %d\n", strlen(name));
    strcat(new, name);
    printf("%s\n", new);
}
