#include <stdio.h>
int main()
{
    int t, n, a[100], i, j, sum,k,b;
    scanf("%d", &t);
    for (k = 0; k < t; k++)
    {
        scanf("%d", &n);
        sum=0;
        for (i = 0; i < n; i++)
        {

            scanf("%d", &a[i]);
            j = a[i];
            while (j > 0)
            {
                b = j%10;
                sum += b;
                j = j / 10;
            }
        }

        if (sum % 3 == 0)
            printf("Yes\n");
        else
            printf("No\n");
    }
}
