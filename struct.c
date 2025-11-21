#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student
{
    char name[100];
    int age;
    float marks;
};
void main()
{
    struct student s1;
    s1.age = 18;
    s1.marks = 80.16;
    strcpy(s1.name, "nagesh");

    struct student s2;
    s2.age = 17;
    s2.marks = 90.9;
    strcpy(s2.name, "ranjitha");

    struct student s3 = {"rakshi", 20, 96.76};

    printf("%s", s1.name);
    printf("%d", s1.age);
    printf("%f", s1.marks);
}
