#include<stdio.h>
int main()
{
    int a[10],i,temp,j,max,min;;
    for(i=0;i<5;i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0;i<5-1;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    max=0;min=0;
    for(i=1;i<5;i++)
    {
        max+=a[i];
    }
    for(i=0;i<4;i++)
    {
        min+=a[i];
    }
    printf("%d %d", min,max);

}