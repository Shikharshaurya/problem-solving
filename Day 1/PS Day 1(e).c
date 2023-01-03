#include<stdio.h>
int main()
{
    int day,month,year,yr_calc,i,c,days,n,new_day,j;
    printf("This will give you the day w.r.t. 01-01-2001\n");
    printf("Enter the day :");
    scanf("%d", &day);
    printf("Enter the month :");
    scanf("%d", &month);
    printf("Enter the year :");
    scanf("%d", &year);
    yr_calc=year-2001;
    for(i=2001;i<year;i++)
    {
        if(i%400==0 || i%4==0 && i%100!=0)
        {
            c++;
        }
    }
    for(j=1;j<month;j++)
    {
        if(j==1 || j==3 || j==5 || j==7 || j==8 || j==10 || j==12 )
        {
            n=n+31;
        }
        else if(j==4 || j==6 || j==9 || j==11)
        {
            n=n+30;
        }
        else if(j==2)
        {
            if(year%400==0 || (year%4==0 && year%100!=0))
            {
                n=n+29;
            }
            else
            {
                n=n+28;
            } 
        }
    }
    days=(yr_calc)*365+c+day+n-1;
    new_day=days%7;
    switch(new_day)
    {
        case 0:printf("monday");
        break;
        case 1:printf("tuesday");
        break;
        case 2:printf("wednesay");
        break;
        case 3:printf("thursday");
        break;
        case 4:printf("friday");
        break;
        case 5:printf("saturday");
        break;
        case 6:printf("sunday");
    }

}