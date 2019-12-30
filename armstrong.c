#include<stdio.h>
int main()
{
	int  num, r, sum=0, flag;

	printf("Enter number for armstrong: ");
	scanf("%d", &num);
	flag = num;
	while(num > 0)
	{
		r = num % 10;
		sum += r * r * r;
		num = num / 10;
	}
	if(flag == sum)
		printf("armstrong number\n");
	else
		printf("not a armstrong number\n");

	return 0;
}
