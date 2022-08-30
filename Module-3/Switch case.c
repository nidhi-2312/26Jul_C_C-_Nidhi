#include<stdio.h>
void main()
{
    int ch,ch1;
    int a,b;
    float ans;
    printf("Enter any 2 no:");
    scanf("%d%d",&a,&b);
    printf("\n1.Add\n2.Sub\n3.Mul\n4.Div\n5.Mod\n");
    printf("Enter your choice:");
    scanf("%d",&ch);   
    switch(ch)
    {
        case 1:
            printf("\nAdddition is:%d",a+b);
            break;
        case 2:
/*        	printf("Enter your choice:");
    		scanf("%d",&ch1);
        	switch(ch1)
        	{
        		case 1:
        			printf("This is nested switch.");
        			break;
			}*/
            printf("\nSubstrsaction is:%d",a-b);
            break;
        case 3:
            printf("\nMultiplication is:%d",a*b);
            break;
        case 4:
            ans=a/b;
            printf("\nDivistion is:%f",ans);
            break;
        case 5:
            printf("\nModulo is:%d",a%b);
            break;
        default:
			printf("\nEnter vaild choice............");   

    }       
}
m