#include <stdio.h>
main()
{  
int N;    
int count = 0;   
scanf("%d", &N);   
while(N!= 0)   
{    
N=N/10;    
count++;
    }    
printf("%d", count);

}
