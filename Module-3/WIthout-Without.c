#include<stdio.h>
int no;
void getdata()
{
    // int no;
    printf("Enter your id no:");
    scanf("%d",&no);
}
void showdata()
{
    printf("Your id no is:%d",no);
}
void main()
{
    getdata();
    showdata();
}