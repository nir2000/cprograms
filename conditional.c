#include<stdio.h>

int main()
{
	int x, y;
	scanf("%d", &x);

	y = (x > 10 ? 3 : 5);

	if(x > 10)
		y = 3;
	else
		y = 5;
	return 0;
}
