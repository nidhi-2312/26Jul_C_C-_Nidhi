#include<stdio.h>
void main()
{
    int no;
    printf("Enter no to check whther it's possitive or not:");
    scanf("%d",&no);
    if(no>0)
        printf("\n%d is possitive no.",no);
    else if(no==0)
    	printf("%d is zero no",no);
	else
        	printf("\n%d is negative no.",no);
}
