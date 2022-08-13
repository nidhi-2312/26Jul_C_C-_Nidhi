#include<stdio.h>
void main()
{
	int x/*10*/,y/*6*/;
	printf("Enter value of x & y:");
	scanf("%d%d",&x,&y);
	y+=x;
//	y-=x;
//	x*=y;
//	x/=y;
//	x%=y;
//	x=++y;
//	x=y++;//x=6++//x=6//y=7
//	x=++y;//x=++7//y=8//x=8
	printf("\nAfter add value is:%d",y);
}
