#include<stdio.h>

int main(void)

{

int N,i,flag=0;

scanf("%d",&N);

for(i=2;i<=N/2;i++)

{

if(N%i==0)

{

flag=1;

break;

}

}

if(flag==0)

{

printf("yes");

}

else

{

printf("no");

}

return 0;

}
