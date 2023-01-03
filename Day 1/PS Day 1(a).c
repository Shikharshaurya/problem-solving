#include<stdio.h>
#include<math.h>
char main()
{
    int bs,hra,da,pf,ts,allow;
    char grad;
    printf("Enter the Basic Salary:");
    scanf("%d", &bs);
    printf("Enter the Grade(Upper Case)");
    scanf("%c", grad);
    hra=(20*bs)/100;
    da=(50*bs)/100;
    if(grad='A')
    allow=1700;
    else if(grad='B')
    allow=1500;
    else
    allow=1300;
    pf=(11*bs)/100;
    ts=bs+hra+da+allow-pf;
    printf("%d", round(ts));
}
