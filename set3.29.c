#include <stdio.h>

int main()
{
int min,hour,r;
scanf("%d",&min);
hour=min/60;
r=min%60;
printf("%d %d",hour,r);
}
