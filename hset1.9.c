#include <stdio.h>

int main()
{
	int a[100],i,j,n; 
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++)
	{
	    for(j=j+1;j<n;j++)
	    {
	        if(a[i]+a[j]==0)
	        {
	            printf("\n%d\t%d",a[i],a[j]);
	        }
	        else if(a[i]+a[j]==1)
	        {
	            printf("\n%d\t%d",a[i],a[j]);
	        }
	        else if(a[i]+a[j]==-1)
	        {
	            printf("\n%d\t%d",a[i],a[j]);
	        }
	        }
	    }
		return 0;
}
