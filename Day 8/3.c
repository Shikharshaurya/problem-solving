#include<stdio.h>
int Sum_of_digits(int n)
{
	int sum = 0;
	while(n > 0 || sum>9)
	{
		if(n == 0)
		{
			n = sum;
			sum = 0;
		}
		sum += n % 10;
		n /= 10;
	}

	return sum;
}
int main()
{
	int n;
	printf("Enter the number");
    scanf("%d", &n);
	int y= Sum_of_digits(n);
	printf("%d", y);
}
