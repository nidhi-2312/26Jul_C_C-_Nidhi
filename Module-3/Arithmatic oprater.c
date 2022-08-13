#include<stdio.h>
void main()
{
    int a,b,ans;
    float div;
    printf("Enter 2 no to perform arithmatic opration:");
    scanf("%d%d",&a,&b);
    ans=a+b;
    printf("\nAddition is:%d",ans);
    printf("\nSubstraction is:%d",a-b);
    ans=a*b;
    printf("\nMultiplication is:%d",ans);
    div=a/b;
    printf("\nDivistion is:%f",div);
    ans=a%b;
    printf("\nModulo is:%d",ans);
    a++;
    ++b;
    printf("\nAfter increament value of A is:%d & B is:%d",a,b);
    --a;
    b--;
    printf("\nAfter decrement value of A is:%d & B is:%d",a,b);
}
