#include <stdio.h>
#include<string.h>
void main()
{
	int N,k,i,j;
	char a[10],temp;
	scanf("%s",a);
	N=strlen(a);
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
	    temp=a[N-1];
        for(j=N-2;j>=0;j--)
 	{
	   a[j+1]=a[j];
	}
	    a[0]=temp;
	   
	} printf("%s",a);
}
