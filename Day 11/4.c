#include<stdio.h>
#include<math.h>
int main()
{
    int l,n,i,j,k,p,sum,factor_sum;
    scanf("%d", &n);
    k=n;
    sum=0;
    while(k>0)
    {
        l=k%10;
        sum+=l;
        k=k/10;
    }
    factor_sum=0;
    while (n%2 == 0)
	{
		factor_sum+=2;
		n = n/2;
	}
	for (int i = 3; i <= sqrt(n); i = i+2)
	{		while (n%i == 0)
		{
			factor_sum+=i;
			n = n/i;
		}
	}
    if(n>2)
	{
        j=n;
        while(j>0)
        {
            factor_sum+=(j%10);
            j=j/10;
        }
    }
    if(sum==factor_sum)
    printf("1");
    else
    printf("0");

}


