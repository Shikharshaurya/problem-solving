// // Fighting the darkness: Given an array arr[] of size N representing the size of candles which 
// reduce by 1 unit each day. The room is illuminated using the given N candles. Find the maximum 
// number of days the room is without darkness.Input: First line contains N, Number of candles and
//  2nd line contains space separated N elements as height of all candles as array A. 
//  Output: Number of days the room can be illuminated.
// https://practice.geeksforgeeks.org/problems/fighting-the-darkness3949/0?category%5B%5D=Arrays&category%5B%5D=Arrays&problemStatus=unsolved&difficulty%5B%5D=-2&difficulty%5B%5D=-1&page=2&query=category%5B%5DArraysproblemStatusunsolveddifficulty%5B%5D-2difficulty%5B%5D-1page2category%5B%5DArrays

#include<stdio.h>
int main()
{
    int n,a[50],i,j,max;
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        scanf("%d", &a[i]);
    }
    max=a[1];
    for(i=1;i<=n;i++)
    {
        if(a[i]>max)
        {
          max=a[i];
        }
    }
    printf("%d", max);
}

