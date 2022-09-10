#include<stdio.h>
void data(int no)
{
    printf("Value is:%d",no);
}
void main()
{
    int no;
    printf("Enter no:");
    scanf("%d",&no);
    data(no);
}