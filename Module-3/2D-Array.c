#include<stdio.h>
void main()
{
    int a[5][5];
    int i,j;
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 5; j++)
        {
            printf("Enter value of no[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 5; j++)
        {
            printf(" %d",a[i][j]);
        }
        printf("\n");
    }
}
/*
    1 2 3 4 5
    1 2 3 4 5
    1 2 3 4 4
*/
