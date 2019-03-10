#include <stdio.h>
int main(void) 
{
	char n[60];
	int i,l=0;
	scanf("%s",n);
	for(i=0;n[i]!='\0';i++)
	{
	    l++;
	}
	printf("%d",l);
	return 0;

}
