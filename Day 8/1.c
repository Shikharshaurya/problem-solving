//2.	WAP in C to calculate the roots of a quadratic equation.
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,e,x1,x2;
    printf("CALCULATING ROOTS OF A QUADRARTIC EQUATION\n");
    printf("Enter the coefficient of x^2\n");
    scanf("%f", &a);
    printf("Enter the coefficient of x\n");
    scanf("%f", &b);
    printf("Enter the constant term\n");
    scanf("%f", &c);
    d=pow(b,2)-4*a*c;
    if(d>=0)
    {
     e=sqrt(d);  
     x1=(-b+e)/2*a;
     x2=(-b-e)/2*a;
     printf("Roots of Equation are = %f and %f", x1,x2);
    }
    else if(d<0)
    {
        e=sqrt(-d);
        x1=-b/2*a;
        x2= e/2*a;
        printf("Roots of Equation are = %.1f+%.1fi and %.1f-%.1fi", x1,x2,x1,x2);
    }
   
}
