#include <stdio.h>
int main()
{
    int n, a[100], i, j, k, b[100];
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i % 2 != 0)
            {
                b[j] = i;
                printf("%d ", b[j]);
            }
        }
    }
    for (i = n - 1; i >= 0; i--)
    {
        for (j = 1; j < n; j += 2)
        {
            if (a[i] % 2 == 0)
                b[j] = a[i];
        }
    }
    for (j = 0; j < n; j++)
    {
        printf("%d", b[j]);
    }
