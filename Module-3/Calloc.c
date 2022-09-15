#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    int no;
    int i;
    printf("Enter size:");
    scanf("%d",&no);
    ptr=(int*)calloc(no,sizeof(int));
    for(i = 0; i < no; i++)
    {
        printf("\nEnter value:");
        scanf("%d",&ptr[i]);
    }
    for(i = 0; i < no; i++)
    {
        printf("\nValue is:%d",ptr[i]);
    }
    return 0;
}