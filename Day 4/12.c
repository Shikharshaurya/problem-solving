#include<stdio.h>
int CatandMouse(int x, int y, int z)
{
    int a,b,c;
    if(x>=z)
    a=x-z;
    else
    a=z-x;

    if(y>=z)
    b=y-z;
    else
    b=z-y;

    if(a>b)
    printf("Cat b\n");
    else if(a<b)
    printf("Cat B\n");
    else if(a==b)
    printf("Mouse C\n");
    

}
int main()
{
    int n,x,y,z,i;
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d%d", &x,&y,&z);
        CatandMouse(x,y,z);
    }
}