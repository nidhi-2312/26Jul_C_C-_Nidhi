#include<stdio.h>
#include<string.h>
void main()
{
    int cmp;
    char str1[20];
    char str2[20];
    printf("Enter 2  string to compare:");
    scanf("%s%s",&str1,&str2);
    cmp=strcmp(str1,str2);
    if (cmp < 0)
        printf("Max string is:%s",str2);
    else if (cmp > 0)
        printf("Max string is:%s",str1);
    else
        printf("Both are equal.");
}