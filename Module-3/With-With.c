#include<stdio.h>
int sub(int *ptr)
{
    return ptr;
}
int main()
{
    int a=90;
    printf("Address of the value is:%d",sub(&a));
}