#include<stdio.h>
int main()
{
char S[100];
int i,count=0,n=0;
gets(S);
for(i=0;S[i]!='\0';i++)
{
if((S[i]=='.')||(S[i+1]==' '))
{
count++;

n++;
}
}
if(n==0)
{count=0;
    printf("%d",count);
}
else
{
    printf("%d",count);
}
return 0;

}
