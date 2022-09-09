#include<stdio.h>
void main()
{
    char nm[20]/*={"abcde"}*/;
    printf("Enter your name:");
    scanf("%s",&nm);
    printf("Your name is:%c",nm[3]);
}