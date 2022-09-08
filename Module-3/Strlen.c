#include<stdio.h>
#include<string.h>
void main()
{
    int len;
    char str[20];
    printf("Enter string:");
    scanf("%s",&str);
    len=strlen(str);
    printf("Length of the string that you entered is:%d",len);
}