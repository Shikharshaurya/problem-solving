#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,k,n,counter,a,d,sum1,sum2,x,y;
    printf("Enter the number");
    scanf("%d", &n);
    k=n;
    counter=0;
    while(k>0)
    {
        k=k/10;
        counter++;
    }
    a=counter/2;
    d=n;
    sum1=0;
    for(i=0;i<a;i++)
    {
        x=d%10;
        d=d/10;
        sum1+=x;
    }
    sum2=0;
    d=d/10;
    for(i=0;i<a+1;i++)
    {
        y=d%10;
        d=d/10;
        sum2+=y;
    }
    
    if(sum1==sum2)
    printf("balanced");
    else 
    printf("unbalanced");

}
