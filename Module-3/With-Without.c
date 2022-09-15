#include<stdio.h>
int a; int b;
int add()
{
    printf("Enter 2 no:");
    scanf("%d%d",&a,&b);
    return a+b;
}
float main()
{
    printf("Addition is:%d",add());
}