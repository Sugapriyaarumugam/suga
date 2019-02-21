#include <stdio.h>

int main() {
  
  char a[1000],b[1000];
  int i,c=0,d=0;
  gets(a);
  gets(b);
  
  for(i=0;a[i]!='\0';i++)
  {
     c++; 
  
      
  }
  for(i=0;b[i]!='\0';i++)
  {
     d++; 
     
  }
  
  if(c>d)
  {
      printf("%s",a);
  }

else
{
    printf("%s",b);
}
    return 0;
}
