#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct book
{
    char name[100];
    char author[100];
    int year;
};
void main()
{
    int n;
    printf("enter number of books:");
    scanf("%d", &n);
    struct book b[3];
    for (int i = 0; i < n; i++)
    {
        printf("enter name of book:");
        scanf("%s", b[i].name);

        printf("enter author of name:");
        scanf("%s", b[i].author);

        printf("enter the publication year:");
        scanf("%d", b[i].year);
    }
}