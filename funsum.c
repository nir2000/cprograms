#include<stdio.h>
#include <stdlib.h>
int *result(int a, int b, int c, int d, int e)
{
	 int *r ;
	r = (int *)malloc(2 * sizeof(int));
    int sum = 0, average ;
    *r = a + b + c + d + e;
    *(r+1) = *r / 5;
    return r;
}

int main()
{
    int a, b, c, d, e, sum,average; 
    int *r;
    printf("Enter numbers:\n");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    r = result(a, b, c, d, e);
   
    
    printf("sum = %d\naverage=%d\n", r[0], r[1]);

    return 0;
}
 
