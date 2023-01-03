#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,k,j,count;
    printf("Enter n");
    scanf("%d", &n);
    count=0;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        count+=i;
    }

    if(count==n)
    printf("True");
    else
    printf("False");
}