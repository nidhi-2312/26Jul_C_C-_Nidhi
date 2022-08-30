#include<stdio.h>
void main()
{
    int a,b,c;
        printf("Enter any 3 no to check max value:");
        scanf("%d%d%d",&a,&b,&c);//10//15//20
        if (a>b)
        {
            if(a>c)
            {
                printf("\n%d is max.",a);
            }
            else
            {
                printf("\n1.%d is max.",c);
            }
        }
        else
        {
            if(b>c)
                printf("\n%d is max.",b);
            else
                printf("\n2.%d is max.",c);
        }       
}
