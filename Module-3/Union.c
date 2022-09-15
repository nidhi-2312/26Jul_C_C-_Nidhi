#include<stdio.h>
union Student
{
    int roll_no;
    char nm[20];
};
int main()
{
    union Student st;
    // st.roll_no=101;
    printf("Enter student roll no:");
    scanf("%d",&st.roll_no);
    printf("Enter student name:");
    scanf("%s",&st.nm);
    printf("\nStudent roll no is:%d\nStudent name is:%s",st.roll_no,st.nm);
}