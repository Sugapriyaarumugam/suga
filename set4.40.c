#include <stdio.h>
int main()
{
    int i, N, t = 0, t1 = 1, temp;
    scanf("%d", &N);
    for (i = 1; i <= N; i++)
    {
        printf("%d ", t);
        temp= t + t1;
        t = t1;
        t1 = temp;
    }
    return 0;
}
