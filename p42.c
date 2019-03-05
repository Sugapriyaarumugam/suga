#include <stdio.h>

void main()
{
 int N;
 scanf("%d",&N);
 int a[N],i,C=1;
 
 for(i=0;i<N;i++)
 {
     scanf("%d",&a[i]);
 }
 
  for(i=0;i<N;i++)
 {
  
  if(a[i]<a[i+1])
  {
      C++;
  } 
 }
 if(C==N)
 {
 printf("yes");
 }
 else
 {
 printf("no");
 }
