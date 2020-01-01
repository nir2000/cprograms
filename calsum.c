#include<stdio.h>
int calsum(int a, int b, int c, int d, int e)
{
	int sum=0;
	sum=a+b+c+d+e;
        return sum;
}
int main()
{
	int a, b, c, d, e, sum;
	printf("Enter numbers: ");
	scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
	sum = calsum(a, b, c, d, e);
	printf("sum of the given number is %d\n", sum);

	return 0;
}
