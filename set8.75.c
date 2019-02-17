#include<string.h>
int main(void) 
{
	char a[30];
	int n,i;
	
	scanf("%s",a);
	n=strlen(a);
	if(n%2==0)
	{
		a[n/2]='*';
		a[(n/2)-1]='*';
	}
	else
	{
		a[n/2]='*';
	}
	printf("\n%s",a);
	return 0;
}
