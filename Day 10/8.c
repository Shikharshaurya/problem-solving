#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    float n;
    scanf("%d", &t);
    while(t>0)
    {
        scanf("%f", &n);
        printf("%.0f\n", floor(n/2)*ceil(n/2));
        t--;
    }
}