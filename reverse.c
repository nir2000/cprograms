#include<stdio.h>
int main()
{
	int num, r, rev=0;

	printf("Enter  number\n");
	scanf("%d", &num);

	while(num != 0)
	{
		r = num % 10;
		rev = rev * 10 + r;
		num = num / 10;
	}

	printf("reverse of the number is %d\n", rev);
	
	return 0;
}

