#include<iostream>
#include<bits/stdc++.h>
#define jod 1000000007
#define mod 99248533
#define ll long long
using namespace std;
int main()
{
  float t;
  int arr[1000];
  cin>>t;
  for(int i=0;i<t;i++)
  {
    cin>>arr[i];
  }
  int a=ceil(t/2);
  for(int i=0;i<t/2;i++)
  {
    cout<<arr[i];
    cout<<arr[i+a];
  }
}