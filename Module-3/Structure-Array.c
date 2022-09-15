#include<stdio.h>
struct Student
{
    int roll_no;
    char nm[20];
};
int main()
{
    int i;
    struct Student st[20];
    // st.roll_no=101;
    for(i = 0; i < 5; i++)
    {
        printf("Enter student roll no[%d]:",i+1);
        scanf("%d",&st[i].roll_no);
        printf("Enter student name[%d]:",i+1);
        scanf("%s",&st[i].nm);
    }
    for(i = 0; i < 5 ; i++)
    {
         printf("\nStudent roll no[%d] is:%d\nStudent name[%d] is:%s",i+1,st[i].roll_no,i+1,st[i].nm);
    }
}