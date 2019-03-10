#include <stdio.h>
int main(void) 
{
  char s[50];
	int i,j,c1,c2;
	scanf("%s",s);
	for(i=0;s[i]!='\0';i++)
	{
	    if(s[i]=='(')
	    {
	        c1++;
	    }
	    if(s[i]==')')
	    {
	        c2++;
	    }
	}
	if(c1==c2)
	{
	    printf("yes");
	}
	else
	{
	    printf("no");
	}
}
