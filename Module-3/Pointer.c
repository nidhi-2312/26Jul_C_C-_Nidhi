#include<stdio.h>
void main()
{
    int no;
    int *ptr;
    printf("Enter no:");
    scanf("%d",&no);//50
    ptr=&no;
    printf("\nAddress of the no is:%d",ptr);
    ptr++;
    *ptr=90;
    printf("\nAddress of the no after inceremenet is:%d",ptr);
    printf("\nValue of no is:%d",no);
}
