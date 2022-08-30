#include<stdio.h>
void main()
{
    int i;
    for(i = 0; i < 10; i++)
    {
        if(i == 5)
        {
            printf("Condition is true...");
            break;
        }
        printf("\n%d",i);
    }
}