#include<stdio.h>
#include<math.h>
int strong(int n)
{
    int i,j,k,a,f,sum;
    for(i=1;i<=n;i++)
    {
        k=i;
        sum=0;
        while(k>0)
        {
            a=k%10;
            k=k/10;
            f=1;
            for(j=1;j<=a;j++)
            {
                f=f*j;
            }
            sum=sum+f;
        }
        if(sum==i)
        {
            printf("%d\n", sum);
        }
    }
}
int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    strong(n);
}