#include <iostream>
#include <bits/stdc++.h>
#define jod 1000000007
#define mod 99248533
#define ll long long
using namespace std;
int main()
{
    int k,n,i,j,arr[1000];
    cin >> n >> k;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int u=abs(n-k);
    for(i=u; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    for(i=0;i<u;i++)
    {
        cout<<arr[i]<<" ";
    }
}