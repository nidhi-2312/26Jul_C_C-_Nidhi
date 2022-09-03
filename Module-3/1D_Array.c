#include<stdio.h>
void main()
{
    int a;
    int no[5];
    // printf("%d",no[0]);
    printf("Enetr value:");
    for(a = 0; a < 5; a++)
    {
        printf("\nno[%d]:",a+1);
        scanf("%d",&no[a]);
    }
    for(a=0; a<5; a++)
    {
        printf("\nNo[%d]:\t%d",a+1,no[a]);
    }
}