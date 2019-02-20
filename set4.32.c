#include <stdio.h>

int main()
{
  int c=0,i;
  char S[100];

  scanf("%[^/n]s",S);
  for(i=0;S[i]!='\0';i++)
  {
    if(S[i]==' ')
    c++;
  }
  printf("%d",c+1);
return 0;
}
