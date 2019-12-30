#include <stdio.h>

int main()
{
	int num, r, sum = 0;
	printf("Enter number: ");
	scanf("%d", &num);

	while(num != 0)
	{
		r = num % 10;
		sum = sum + r;
		num = num / 10;
	} 
	printf("sum of the number is %d\n", sum);

	return 0;
}
