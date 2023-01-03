#include <stdio.h>
int gcd(int num1, int num2)
{
    int gcd,remainder, numerator, denominator;
    if (num1 > num2)
    {
        numerator = num1;
        denominator = num2;
    }
    else
    {
        numerator = num2;
        denominator = num1;
    }
    remainder = numerator % denominator;
    while (remainder != 0)
    {
        numerator   = denominator;
        denominator = remainder;
        remainder   = numerator % denominator;
    }
    gcd = denominator;
    printf("GCD : %d",gcd);
}
int main()
{
    int num1,num2;
    printf("Enter two numbers\n");
    scanf("%d %d", &num1, &num2);
    gcd(num1,num2);
}



