#include<stdio.h>
int calsum(int a, int b, int c, int d, int e)
{
    int sum=0;
    sum=a+b+c+d+e;
    return sum;
}
int calavg(int a, int b, int c, int d, int e)
{
    int sum=0;
    int avg=0;
    sum=a+b+c+d+e;
    avg=(float)sum/5;
    return avg;
}
int main()
{
    int a,b,c,d,e,sum,avg;
    printf("Enter number: ");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    sum=calsum(a,b,c,d,e);
    avg=calavg(a,b,c,d,e);
    printf("sum is %d\n average is %d\n",sum,avg);

    return 0;
}

