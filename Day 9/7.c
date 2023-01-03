#include <stdio.h>
#include <math.h>
int main()
{
    int i, j, k, n;
    printf("Enter the number");
    scanf("%d", &n);
    k = 0;
    for (i = 1; i < n; i++)
    {
        j = n % i;
        if (j == 0)
        {
            n = n - i;
            k++;
            i=0;
        }
        else
            continue;
    }
    if (k % 2 == 0)
        printf("False");
    else
        printf("True");
}