#include<stdio.h>
#include<string.h>
void main()
{
    char str1[20];
    char str2[20];
    printf("Enter your 1st string:");
    scanf("%s",&str1);
    strcpy(str2,str1);
    printf("\nyour 2nd string is:%s",str2);
}