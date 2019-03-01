#include<stdio.h>
#include<conio.h>
int main()
{
int k=0,i,c=0;
char a[1000],b[1000];
clrscr();
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
c++;
}
k=0;
 for(i=c;i>=0;i--)
{
b[k]=a[i];
k++;
}
b[k]='\0';
for(i=0;i<=c;i++)
{
  printf("%c",r[i]);
}
}
