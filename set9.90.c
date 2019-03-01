#include <stdio.h>
#include <string.h>
int main(void) {
  char b[100];
  int i;
  scanf("%s",b);
  for(i=0;b[i]!='\0';i++)
  {
    if(b[i]>='0' && b[i]<='9')
    {
  
  printf("%c",b[i]);
    }
    }
  
}
