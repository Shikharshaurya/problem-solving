# include<stdio.h>
int main()
{
    long long int t,n,a,b,k,count=0;
    scanf("%lld%lld",&n,&t);
    while(t--)
    {
        scanf("%lld%lld%lld",&a,&b,&k);
        count=count+(b-a+1)*k;
    }
    printf("%lld\n",count/n);
    return 0;
}