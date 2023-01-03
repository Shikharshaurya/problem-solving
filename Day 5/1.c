// Ishaan Loves Chocolates: As we know, Ishaan has a love for chocolates. He has bought a huge chocolate bar that contains N chocolate squares. Each of the squares has a tastiness level which is denoted by an array A[]. Ishaan can eat the first or the last square of the chocolate at once. Ishaan has a sister who loves chocolates too and she demands the last chocolate square. Now, Ishaan being greedy eats the more tasty square first. Determine the tastiness level of the square which his sister gets. Input: First line contains N, Number of chocolate squares and 2nd line contains space separated N elements as the sweetness of all squares as array A. Output: 0ne number representing sweetness of the square received by ishan’s sister. https://practice.geeksforgeeks.org/problems/ishaan-loves-chocolates2156/0
#include<stdio.h>
int main()
{
    int n,i,a[10],min;
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    min=a[0];
    for(i=0;i<n;i++)
    {
    if(a[i]<min)
    min=a[i];
    }
    printf("%d", min);
}
