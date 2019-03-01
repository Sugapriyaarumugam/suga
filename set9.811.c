#include <stdio.h>
int main(void) {
	int a[100],b[100],C[100];
	int v,i,j;
	scanf("%d",&v);
	for(i=0;i<v;i++)
	{
		scanf("%d %d",&a[i],&b[i]);
		C[i]=a[i]-b[i];
	}
	for(i=0;i<v;i++)
	{
		printf("\n%d",C[i]);
	}
}
