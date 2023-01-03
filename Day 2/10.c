 #include<stdio.h>
 int main()
 {
    int i,j,k,n;
    printf("Enter the value of n\n");
    scanf("%d", &n);

    for(i=-n;i<=n;i++)
    {
        if(i==0)
          continue;
        k=i;
        if(k>0)
        {
            k=k*(-1);
        }
        for(j=0;j<n;++j)
        {
            if(j<(k+n))
            {
                printf(" ");
            }
            else
            {
                printf("* ");
            }
        }
        printf("\n");
    }
 }