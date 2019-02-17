#include <stdio.h>

int main(void) 
{
	int n,a,pro,i,flag=0;
	scanf("%d %d",&n,&a);
	pro=n*a;
	for(i=1;i<=pro/2;i++)
	{
		if(i*i==pro)
		{
			flag=1;
			break;
		}
	
	}
	
	if(flag==1)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
