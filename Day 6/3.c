// To check if the given matrix is Magic Matrix
#include<stdio.h>
int main()
{
    int n,i,j,a[50][50],sum1,sum2,sum3,sum4,sum5,k;
    scanf("%d", &n);
    sum1=0;
    sum2=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    sum3=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            sum3=sum3+a[i][j];
        }
    }
    sum4=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i+j==n-1)
            sum4=sum4+a[i][j];
        }
    }
    sum5=0;
    for(i=0;i<n;i++)
    {   
       sum5=sum5+a[i][0];  
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            sum1=sum1+a[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            sum2=sum2+a[j][i];
        }
    }
    if(sum1==sum2 && sum3==sum4 && sum1==3*sum3 && sum1%sum5==0)
    {
        printf(" !! Magical Square !!");
    }
    else 
    {
        printf("Not");
    }
}
