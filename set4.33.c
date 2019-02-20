#include<stdio.h>
	int main()
	{
	char S[100];
	int i,count=0;
	gets(S);
	for(i=0;S[i]!='\0';i++)
	{
	if(S[i]==' ')
	{
	count++;
	}
	}
	printf("%d",count);
	return 0;
	}
