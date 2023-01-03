#include <iostream>
#include <bits/stdc++.h>
#define jod 1000000007
#define mod 99248533
#define ll long long
using namespace std;

int main()
{
    int n;
    int k;
    cin >> n >> k;
    int a[n];
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
  	for(int i=k;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	for(int i=0;i<k;i++)
	{
		cout<<a[i]<<" ";
	}
    cout << endl;
    return 0;
}