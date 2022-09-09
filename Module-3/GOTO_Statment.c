#include<stdio.h>
void main()
{
    int i,flag=0;
    int no;
    printf("Enter no to check wether the no is prime or not:");   
    scanf("%d",&no);
    for(i = 2; i < no; i++)
    {
        if(no % i == 0)
        {
            flag=1;
            goto  prime;
        }
    }
    prime:
    {
        if(flag == 0)
            printf("%d is prime no.",no);
        else
            printf("%d is not prime no.",no);
    }
}