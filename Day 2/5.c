#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter n");
    scanf("%d", &n);
    for(i=69;i>69-n;i--) //69 for 'E'
   {
        for(j=i;j<=69 && j>=65;j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}