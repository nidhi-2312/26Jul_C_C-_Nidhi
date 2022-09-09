#include<stdio.h>
void main()
{
    int i;
    for(i = 0; i < 10; i++)
    {
        if(i == 5)
        {
            printf("\nCondition is true...\n");
            continue;
        }
        printf("\n%d",i);     
    }
}