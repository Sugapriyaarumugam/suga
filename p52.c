#include <stdio.h>
int main(void) 
{
	int N,i,flag=0,a[60],j,temp=0,k;

	scanf("%d%d",&N,&k);
  if(N<100000)
  {
	for(i=0;i<N;i++)
	{
	    scanf("%d",&a[i]);
	}
	for(i=0;i<N;i++)
	{
	    for(j=i+1;j<N;j++)
	    {
	        if(a[j]<a[i])
	        {
	            temp=a[j];
	            a[j]=a[i];
	            a[i]=temp;
	        }
	    }
	}
	printf("%d",a[k-1]);
}
}
