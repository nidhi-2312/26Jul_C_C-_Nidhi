#include<stdio.h>
void  main()
{
	int i;
	for(i=0;i<10;i++)
	{
		if(i==5)
			goto megha;
		printf("%d\n",i);
	}	
	megha:
		printf("This is lable.");
}
