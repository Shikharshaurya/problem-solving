#include<stdio.h>
int main()
{
    int i,j,k,b,n,a[100],t;
    scanf("%d",&t);
    while(t>0)
    {
      scanf("%d", &n);
      for(int i=0;i,n;i++)
      {
        scanf("%d", &a[i]);
      } 

      for(j=0;j<n;i++)
      {
        for(k=0;k<n;k++)
        {
            if(a[j]%a[k]!=0)
            b++;
        }
      }
       if(b==n)
       {
        printf("YES\n");
        break;
       }
        else
        printf("NO\n");
      t--;      
    }
    
}