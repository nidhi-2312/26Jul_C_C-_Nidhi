#include<stdio.h>
void main()
{
    int age;
    printf("Enter your age to check you are elligeble for vote or not:");
    scanf("%d",&age);
    if(age>18)
    {
        printf("You are elligible for vote.");
    }
    else
    {
        printf("Not elligible for vote.");
    }
}