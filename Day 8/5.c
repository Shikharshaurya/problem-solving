#include<stdio.h>
#include<math.h>
int prime(int a)
{
    int i,b,c;
    c=0;
    if(a==1)
        return 1;
    else{
    for(i=2;i<=a;i++)
    {
      b=a%i;
      if(b==0)
      {
        return i;
      }    
    }
    }
}
void main()
{
    int n,i,j,k;
    printf("Enter any number\n");
    scanf("%d", &n);
    for(j=1;j<=n;j++)
    {
       k = prime(j);
       printf("%d ", k);
    }
}