#include<stdio.h>

int main(void)
{
	
	int arr1[50], arr2[50], size1, size2, size, i, j, k, merge[100];
	scanf("%d",&size1);
	for(i=0; i<size1; i++)
	{
		scanf("%d",&arr1[i]);
	}
	scanf("%d",&size2);
	for(i=0; i<size2; i++)
	{
		scanf("%d",&arr2[i]);
	}
	for(i=0; i<size1; i++)
	{
		merge[i]=arr1[i];
	}
	size=size1+size2;
	for(i=0, k=size1; k<size && i<size2; i++, k++)
	{
		merge[k]=arr2[i];
	}
	for(i=0; i<size; i++)
	{
		printf("%d  ",merge[i]);
	}
}
