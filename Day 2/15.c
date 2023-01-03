
#include<stdio.h>
int main()
{
    int i,k,num=1,temp,nn,count,n;
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
      printf("%d\n", num);
      nn=0;
      k=1;
     while(num!=0)
     { 
        temp=num%10;
         num=num/10;
         count=1;
         while(temp==num%10)
         {
             count++;
             num=num/10;
         }
         nn=(((count*10)+temp)*k)+nn; 
         k=k*100;
      }
      num=nn;
    }

}