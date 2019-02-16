#include <stdio.h>

int main(void) {
	char s[1000];
	int t=0,i;
	scanf("%[^\n]s",s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z')
		{
		t++;
		break;
			
		}
	}
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>='0'&&s[i]<='9')
		{
		t++;
		break;
			
		}
	}
	if(t==2)
	printf("yes");
	else
	printf("no");
	
	return 0;
}
