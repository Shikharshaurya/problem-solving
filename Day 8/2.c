#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,n,d,k,a,b,arr[100],l;
    printf("Enter the value of a");
    scanf("%d", &a);
    printf("Enter the value of b");
    scanf("%d", &b);
    printf("Enter the value of k");
    scanf("%d", &k);
    d=pow(a,b);
    i=d;
    l=0;
    while(i>0)
    {
        j=i%10;
        arr[l]=j;
        i=i/10;
        l++;
    }
    printf("%d", arr[k-1]);
}