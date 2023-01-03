#include<stdio.h>
#include<math.h>
int main()
{
    int n,a[1000],i,j,least;
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    least=abs(a[1]-a[0]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(abs(a[j]-a[i])<least)
            least = abs(a[j]-a[i]);
        }
    }
    printf("%d", abs(least));
}

