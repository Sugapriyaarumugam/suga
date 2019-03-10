#include <stdio.h>
#include<math.h>
#define pi 3.14
int main(void) {
	int N;
	float res;
	scanf("%d",&N);
	res=sin(N*pi/180);
	printf("%f",res);
	return 0;

}
