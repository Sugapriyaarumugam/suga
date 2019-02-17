#include<stdio.h>
int main()
{
	int N,i,a,b,c;
	
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		a=pow(2,i);
		if(a>N)
		{
			b=i;
			break;
		}
	}
	c=pow(2,b);
	printf("\n%d",c);
	
	return 0;
}
