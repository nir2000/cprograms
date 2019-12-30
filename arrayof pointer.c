#include<stdio.h>
int main()
{
   int a,b,c,d;
   a=10;
   b=20;
   c=30;
   d=40;
   int *p[4];
   p[0]=&a;
   p[1]=&b;
   p[2]=&c;
   p[3]=&d;
   printf("%d %d %d %d\n", *p[0],*p[1],*p[2],*p[3]);
   printf("%u %u %u %u\n",p[0],p[1],p[2],p[3]);
   a=50;
   p[0]=&b;
   printf("%d %u\n", *p[0],p[0]);
   return 0;
}

