#include <stdio.h>
#include<string.h>
int main(void)
{
	char str[10];
	int i,temp,n;
	gets(str);
	n=strlen(str);
	if(n%2==0)
	{
		for(i=0;i<n;i+=2)
		{
			temp=str[i]
			str[i]=str[i+1];
			string[i+1]=temp;
		}
		puts(string);
	}
	else
	{
		for(i=0;i<n-1;i+=2)
		{
			temp=str[i];
			str[i]=str[i+1];
			str[i+1]=temp;
		}
		puts(str);
	}
}
