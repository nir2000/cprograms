#include<stdio.h>

int main()
{
    int bs;
    float da, hra, gs;

    printf("Enter basic salary");
    scanf("%d", &bs);
    da = bs * 0.4;
    hra = bs * 0.2;
    gs = bs - da - hra;
    printf("gross salary is %d\n", gs);
    return 0;
}   
