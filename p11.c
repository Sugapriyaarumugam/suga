#include<stdio.h>
void main()
{
 char a[50];
 clrscr();
 gets(a);
 if(a[0]=='s' || a[0]=='S')
 {
  printf("Yes");
 }
 else
 {
  printf("No");
 }
}
