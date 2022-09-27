#include<stdio.h>
int main()
{
    char str[10];
    char str1[10];
    FILE *fptr;
    printf("Enter string:");
    scanf("%s",&str);
    fptr=fopen("D:/Nidhi batch/26july_C_C++/Module-3/hello.txt","a");
    fprintf(fptr,"\n%s",str);
    fclose(fptr);
    fptr=fopen("D:/Nidhi batch/26july_C_C++/Module-3/hello.txt","r");
    fscanf(fptr,"%s",&str);
    printf("%s",str);
    fscanf(fptr,"%s",&str);
    printf("\n%s",str);
    fclose(fptr);
    return 0;
}