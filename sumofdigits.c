#include<stdio.h>

int main()
{
    int num, sum=0, r;
    printf("Enter a number\n");
    scanf("%d", &num);

    while(num != 0)
	r = num % 10;
	sum += r;
	sum /= 10;
	printf("%d", sum);
    return 0;
}
