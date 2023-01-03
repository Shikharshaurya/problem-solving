#include<stdio.h>
#include<math.h>
int main()
{
    int coins,circumference,area,a;
    printf("Enter the number of coins");
    scanf("%d", &coins);
    printf("Enter the circumference of coins");
    scanf("%d", &circumference);
    float rad= circumference/(2*3.14);
    for(int i=1;i<coins;i++)
    {
        a=(i*(i+1)*(i+2))/2*i;
        if(coins%a==0)
        {
            printf("Acceptable ");
            printf("Area = %f", (sqrt(3)*(2*rad*i)*(2*rad*i))/4);
            break;
        }
        else
        {
            printf("Not Acceptable");
            printf("-1");
            break;
        }
    }
}