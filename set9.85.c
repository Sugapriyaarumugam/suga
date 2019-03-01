#include <stdio.h>
#include<string.h>
int main(void) {
  char b[100];
  int i;
  scanf("%[^\t\n]s",b);
  for(i=0;b[i]!='\0';i++)
  {
    if(i%2==0)
    {
      printf("%c",b[i]);
    }
  }
  printf("\t");
  for(i=0;b[i]!='\0';i++)
  {
    if(i%2!=0)
    {
      printf("%c",b[i]);
    }
  }}
