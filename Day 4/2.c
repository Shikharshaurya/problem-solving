#include<stdio.h>
int mean(int n1,int n2,int n3,int n4,int n5)
{
    float sum,mean_;
    sum=n1+n2+n3+n4+n5;
    mean_=(sum)/5;
    printf("%f", mean_);
}
int median(int n1,int n2,int n3,int n4,int n5)
{
    float median_;
    median_=n3;
    printf("%f", median_);
}
int main()
{
    float n1,n2,n3,n4,n5;
    scanf("%f%f%f%f%f", &n1,&n2,&n3,&n4,&n5);
    mean(n1,n2,n3,n4,n5);
    printf("\n");
    median(n1,n2,n3,n4,n5);
}