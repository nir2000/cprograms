#include<stdio.h>

int factorial(int n)
{
    int i, f = 1;
    for(i=1; i <= n; i++)
    	f = f * i;
    return f;
}

int main()
{
    int a, f;

    printf("Enter number\n");
    scanf("%d", &a);
    f = factorial(a);
    printf("the factorial of the value is %d\n", f);

    return 0;
}

