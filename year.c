#include <stdio.h>

int year(int year)
{
	
	if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	{
		printf("is a leap year\n");
	}
	else
	{
		printf("is not aleap year\n");
	}

}

int main()
{
	int n;

	printf("Enter a year: ");
	scanf("%d", &n);
	year(n);
	
	return 0;
}
