#include<iostream>
#include<bits/stdc++.h>
#define jod 1000000007
#define mod 99248533
#define ll long long
using namespace std;
int main()
{
  int t,i,j,arr[1000],n,p,q,count;
  cin>>t;
  for(int i=0;i<t;i++)
  {
    cin>>arr[i];
  }
  q=0;
  for(i=0;i<t;i++)
  {
    n=arr[i];
    count=0;
    while(n>0)
    {
        p=n%10;
        count+=1;
        n=n/10;
    }
    if(count%2==0)
    q++;
  }
  cout<<q;
}