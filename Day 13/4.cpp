#include <iostream>
#include <bits/stdc++.h>
#define jod 1000000007
#define mod 99248533
#define ll long long
using namespace std;
int main()
{
    int t, arr[1000], i, flag, count, flag2, count2, flag3, j, k;
    cin >> t;
    for (i = 0; i < t; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < t - 1; i++)
    {
        if (arr[i] < arr[i + 1])
            flag = 0;
        else
        {
            flag = 1;
            count = i;
            break;
        }
    }
    for (j = count; j < t - 1; j++)
    {
        if (flag == 1 && (arr[j] == arr[j + 1]))
            flag2 = 0;
        else
        {
            flag2 = 1;
            count2 = j;
            break;
        }
    }
    for (k = count2; k < t - 1; k++)
    {
        if (flag = 1 && flag2 == 1 && (arr[k] > arr[k + 1]))
        {
            flag3 = 0;
        }
        else
        {
            flag3 = 1;
            break;
        }
    }
    if (flag3 == 0)
        cout << "Perfect" << endl;
    else if (flag3 != 0)
        cout << "Not" << endl;
}