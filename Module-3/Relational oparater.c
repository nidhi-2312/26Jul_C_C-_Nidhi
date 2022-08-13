#include<stdio.h>
void main()
{
    int age;
    printf("Enter your age to check you are minor or not:");
    scanf("%d",&age);
    if (age>18)
    {
        printf("\nYou are Adult.");
    }
    else
    {
        printf("\nYou are Minor.");
    }
}