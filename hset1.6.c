#include <stdio.h>

int main()
{
	int a[20],i,j,n,c; 
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++)
	{
		printf("%d ",a[i]);
	}
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(a[i]==a[j])
			{
				printf("%d",a[i]);
				goto c;
			}				
		}
	}
	c:
	return 0;

}
