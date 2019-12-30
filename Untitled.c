#include<stdio.h>

int findmax(int a)
{
	int m=a;
	int i;
	for(i=0;i<a;i++)
	{
		if((a+i)>m)
		{
			m=(a+i);
		}
	}
	return m;
}

int findmin(int a)
{
	int m=a;
	int i;
	for(i=0;i<a;i++)
	{
		if((a+i)<m)
		{
			m=(a+i);
		}
	}
	return m;
}


int main()
{
	int arr[10] = {10, 23, 54, 34, 65, 07, 02, 34, 98, 76};
	int i, max, min;

	for(i = 0; i < 10; i++)
		printf("%d\n", arr[i]);

	max = findmax(arr);
	min= findmin(arr);

	printf("maximum = %d\n", max);
	printf("minimum = %d\n", min);

	return 0;
}

