// create a structure with a three variables name of the car, maximum speed and price stored in array of structure and display them//
#include <stdio.h>
struct car
{
    char name[50];
    int max_speed;
    int price;
};
void main()
{
    int n;
    printf("enter the number of car:");
    scanf("%d", &n);
    struct car c[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter the name of car:");
        scanf("%s", c[i].name);

        printf("enter the maximum speed of car:");
        scanf("%d", &c[i].max_speed);

        printf("enter the price of car:");
        scanf("%d", &c[i].price);
    }
    printf("your information");
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", c[i].name);
        printf("%d\n", c[i].max_speed);
        printf("%d\n", c[i].price);
    }
}
