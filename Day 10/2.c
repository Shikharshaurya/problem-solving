#include <stdio.h>
void connecting_towns(int n, int arr[])
{
    int i,prod;
    prod = 1;
    for (i = 0; i < n - 1; i++)
    {
        prod = ((prod * arr[i])%1234567);
    }
    printf("%d\n", prod % 1234567);
}
int main()
{
    int t, n, arr[100], i;
    scanf("%d", &t);
    while (t > 0)
    {
        scanf("%d", &n);
        for (i = 0; i < n - 1; i++)
        {
            scanf("%d", &arr[i]);
        }
        connecting_towns(n, arr);
        t--;
    }
}
