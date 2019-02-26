#include <stdio.h>
 
int main() 
{
	int N,a[60],i;
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=N;i++)
	{
		if(i!=a[i])
		{
			printf("\n%d",i-1);
			break;
		}
	}
 
	return 0;
}
