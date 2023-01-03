// Multiply left and right array sum: Pitsy needs help in the given task by her 
// teacher. The task is to divide a array into two sub array (left and right) 
// containing n/2 elements each and do the sum of the subarrays and then multiply 
// both the subarrays. Input: First line contains N, Number of elements and 2nd line 
// contains space separated N elements of array A. Output: A number resulting 
// multiplication of sum of left half elements to right half elements. 
// https://practice.geeksforgeeks.org/problems/multiply-left-and-right-array-sum1555/1


#include<stdio.h>
int main()
{
    int n,a[50],b[50],c[50],i,j,max,sum1,sum2;
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        scanf("%d", &a[i]);
    }
    if(n%2==0)
    {
        sum1=0;
        sum2=0;
        for(i=1;i<=n/2;i++)
        {
            b[i]=a[i];
            sum1=sum1+b[i];
        }
        for(j=n/2+1;j<=n;j++)
        {
            c[j]=a[j];
            sum2=sum2+c[j];
        }
        printf("%d", sum1*sum2);
    }
     else if(n%2!=0)
    {
        sum1=0;
        sum2=0;
        for(i=1;i<=n/2+1;i++)
        {
            b[i]=a[i];
            sum1=sum1+b[i];
        }
        for(j=n/2+2;j<=n;j++)
        {
            c[j]=a[j];
            sum2=sum2+c[j];
        }
        printf("%d", sum1*sum2);
    }
}
