#include<stdio.h>
int palindrome(int n)
{
    int a;
    int rev=0;
    int m;
    m=n;
    while(n>0)
    {
     a=n%10;
     n=n/10; 
     rev=rev*10+a;
    }
     if(rev==m)
     printf("Entered number is palindrome");
     else 
     printf("Not");
}  
int main()
{
    int n;
    printf("Enter any number\n");
    scanf("%d", &n);
    palindrome(n);
}
    