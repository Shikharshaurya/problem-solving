#include<stdio.h>
int main()
{
  int i,n,j,k=65;
  printf("Enter the value of n\n");
  scanf("%d", &n);
  for(i=65;i<=(65+n);i++)
  {
    for(j=65;j<=i;j++)
    {
      printf("%c", k++);
    }
      k=i+1;
      printf("\n");
  }
}
