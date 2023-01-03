#include <stdio.h>
int main()
{
    int t, n, k;
    scanf("%d", &t);
    while (t>0)
    {
        scanf("%d%d", &n, &k);
        if (k<n/2)
            printf("%d\n", 2*k+1);
        else
            printf("%d\n", 2*(n-k-1));
        t--;
    }
}
