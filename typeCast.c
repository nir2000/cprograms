#include <stdio.h>

int main()
{
	int a = 10;
	int b = 3;

	float quotient;
	quotient = (float)a / b;
	
	typedef int i;
	i j, k;

	j = 10;
	k = 29;

	typedef float f;
	f x;
	x = 0.98;

	typedef char c;
	
	c s1[10] = "jeetu";
	
	
	printf("s1 = %s\n", s1);

	printf("x = %f\n", x);

	printf("j = %d k = %d\n", j, k);
	
	printf("quotient = %f\n", quotient);

	

return 0;
}
