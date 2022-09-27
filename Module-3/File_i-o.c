#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr=fopen("D:/Nidhi batch/26july_C_C++/Module-3/Demo.txt","w");
    fprintf(fptr,"Hello");
    fclose(fptr);
    return 0;
}