
#include <stdio.h>
int main()
{
    float p, r, t, simple_int;
    scanf("%f", &p);
    
    scanf("%f", &r);

    scanf("%f", &t);

    simple_int = p * r * t / 100;

    printf(" %0.2f", simple_int);

    return 0;
}
