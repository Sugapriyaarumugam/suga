#include <stdio.h>

int main(void) 
{
	int n,k,i,s=1;
	scanf("%d %d",&n,&k);
	for(i=1;i<=k;i++)
	{
		s=s*n;	
	}
	printf("%d",s);
	return 0;
}
