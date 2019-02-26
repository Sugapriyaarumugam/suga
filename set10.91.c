#include <stdio.h>
#include <math.h>
 
int main()
{
    float w, l, h;
    float surfacearea, volume, space_diagonal;
 
    
    scanf("%f%f%f",&w,&l,&h);
    surfacearea = 2 *(w * l + l * h +
    h * w);
    volume = w * l * h;
    space_diagonal = sqrt(w * w + l * l +
    h * h);
    printf(" %.3f", surfacearea);
    printf(" %.3f", volume);
    printf(" %.3f", space_diagonal);
    return 0;
}
