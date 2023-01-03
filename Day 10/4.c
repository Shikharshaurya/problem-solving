#include<stdio.h>
int main()
{
    int n,div[100000],j,k,i,l,m,sum,digit_sum[100000],max,max_i;
    scanf("%d", &n);
    k=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            div[k]=i;
            k++;
        }
    }
    for(i=0;i<n;i++)
    {
        j=div[i];
        sum=0;
        while(j!=0)
        {
            l=j%10;
            sum+=l;
            j=j/10;  
        }
        digit_sum[i]=sum;
    }

   max=digit_sum[0];
    for(m=0;m<k;m++)
    {
        if(digit_sum[m] >max)
        {
          max=digit_sum[m];
          max_i=m;
        }
    }

    printf("%d", div[max_i]);
}