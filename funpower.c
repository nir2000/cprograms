/* find the function power (a,b), to calculate the value of a raised to b */

#include<stdio.h>

int power(int a, int b)
{
    int i, powb = 1;
    for(i = 1; i <= b; i++)
		powb = powb * a;
    return powb;
}

int main()
{
    int n, x, powb; 

    printf("Enter two number: ");
    scanf("%d %d", &n, &x);

    powb = power(n, x);
    printf("the power of the given is %d\n", powb);
    
    return 0;
}

