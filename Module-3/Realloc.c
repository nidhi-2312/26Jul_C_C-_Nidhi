#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    int no;
    int i;
    printf("Enter size:");
    scanf("%d",&no);
    ptr=(int*)malloc(no*sizeof(int));
    for(i = 0; i < no; i++)
    {
        printf("\nEnter value:");
        scanf("%d",&ptr[i]);
    }
    for(i = 0; i < no; i++)
    {
        printf("\nValue is:%d",ptr[i]);
    }
//assign new size using realloc 
    printf("\nEnter new size:");
    scanf("%d",&no);
    ptr=(int*)realloc(ptr,no*sizeof(int));
    for(i = 0; i < no; i++)
    {
        printf("\nEnter value:");
        scanf("%d",&ptr[i]);
    }
    for(i = 0; i < no; i++)
    {
        printf("\nValue is:%d",ptr[i]);
    }
    free(ptr);
    return 0;
}
