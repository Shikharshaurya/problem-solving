#include <stdio.h>

int main()
{
    int a,b,c,x,lar;
    printf("Enter any no. A\n");
    scanf("%d", &a);
    printf("Enter any no. B\n");                                                                                                              
    scanf("%d", &b);
    printf("Enter any no. C\n");
    scanf("%d", &c);
    x=a>b?a:b;
    lar=x>c?x:c;
    printf("Largest=%d", lar);
    return 0;
}
