#include <iostream>
#include <bits/stdc++.h>
#define jod 1000000007
#define mod 99248533
#define ll long long
using namespace std;
int main()
{
  int t, arr[300], i, j, temp;
  cin >> t;
  i = 0;
  for (i = 0; i < t; i++)
  {
    cin >> arr[i];
  }
  for (i = 0; i < t - 1; i++)
  {
    for (j = i + 1; j < t; j++)
    {
      if (arr[j] < arr[i])
      {
        temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
      }
    }
  }
  for (i = 0; i < t; i++)
  {
    cout << arr[i]<< ",";
  }
}
