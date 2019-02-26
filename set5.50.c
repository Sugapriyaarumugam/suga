#include <stdio.h>
int main() 
{
	int n,flag=0,temp;
	scanf("%d",&n);
	temp=n;
	while(temp!=1)
	{
		if(temp%2!=0)
		{
			flag=1;
			break;
		}
		temp=temp/2;
	}
	if(flag==0)
	{
		printf("yes");
	}
	else if(flag==1)
	{
		printf("no");
	}
	return 0;
}
