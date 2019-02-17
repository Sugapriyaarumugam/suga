#include<string.h>

int main(void)

{
	char N[10];
	scanf("%s",N);
	int i,flag=0,m;
	m=strlen(N);
	for(i=0;i<m;i++)
	{
		if(N[i]=='1' || N[i]=='0')
		{
			flag=1;
		}

		else

		{

			flag=0;

			break;

		}
	}
	if(flag==1)
	{
			printf("yes");
	}
	else
	{
		printf("no");
	}
	}
