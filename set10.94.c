#include <stdio.h>
    int main()
    {
        int arr[100], len, i, j, temp, n;
        printf("Enter the size:");
 
        scanf("%d", &len);
        for (i = 0; i < len; i++) 
        {
            scanf("%d", &arr[i]);
        }
        scanf("%d", &n);
        printf("%d", n, arr[n - 1]);
        return 0;
    }
