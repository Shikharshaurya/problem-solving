// #include<iostream>
// #include<bits/stdc++.h>
// #define jod 1000000007
// #define mod 99248533
// #define ll long long
// using namespace std;
// int t;
// void removemax(long int arr[])
// {
//     long int max,y;
//     max=arr[0];
//     y=0;
//     for(int i=0;i<t;i++)
//     {
//         if(arr[i]>max)
//         {
//             max=arr[i];
//             y=i;
//         }
//     }
//     arr[y]=-1;
// }
// void removemin(long int arr[])
// {
//     long int min,y;
//     min=arr[1];
//     y=0;
//     for(int i=0;i<t;i++)
//     {
//         if(arr[i]<min)
//         {
//             min=arr[i];
//             y=i;
//         }
//     }
//     arr[y]=-1;
// }
// int main(){
//     long int t, arr[1000];
//     cin>>t;
//     for(int i=0;i<t;i++)
//     {
//         cin>>arr[i];
//     }
//     for(int i=0;i<t;i++)
//     {
//         if(i%2==0 && i!=t-1)
//         removemax(arr);
//         else if(i%2!=0 && i!=t-1)
//         removemin(arr);
//     }
//     for(int i=0;i<t;i++)
//     {
//         if(arr[i]!=-1)
//         cout<<arr[i];
//     }
// }