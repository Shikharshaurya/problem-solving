#include <iostream>
#include <bits/stdc++.h>
#define jod 1000000007
#define mod 99248533
#define ll long long
using namespace std;
int main()
{
    int t,arr[1000],i,j,k,max;
    cin >> t;
    for(i=0;i<t;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<t-1;i++)
    {
        max=0;
        for(j=i+1;j<t;j++)
        {
            if(arr[j]>max)
            max=arr[j];
        }
        cout<<max<<" ";
    }
    cout<<-1;
}