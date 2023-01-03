#include <stdio.h>
#include<string.h>

int Valid(char str[100] , int n)
{
    int i;
	if (!((str[0] >= 'a' && str[0] <= 'z')
		|| (str[0] >= 'A' && str[0] <= 'Z')
		|| str[0] == '_'))
		return 0;

	for (int i = 1; i < strlen(str); i++) {
		if (!((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9')
			|| str[i] == '_'))
			return 0;
	}
	return 1;
}

int main()
{
	char str[100];
    gets(str);
	int n = strlen(str);

	if (Valid(str, n))
		printf("Valid");
	else
		printf("InValid");

	return 0;
}
