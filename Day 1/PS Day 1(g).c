#include<stdio.h>
int main()
{
    int temp;
    printf("Enter the temperature in Centigrade");
    scanf("%d", &temp);
    if(temp<0)
    printf("Freezing Weather");
    else if(temp>0 && temp<10)
    printf("Very Cold Weather");
    else if(temp>=10 && temp<20)
    printf("Cold Weather");
    else if(temp>=20 && temp<30)
    printf("Normal in temp");
    else if(temp>=30 && temp<40)
    printf("Its Hot");
    else if(temp>=40)
    printf("Its very hot");
    return 0;
}