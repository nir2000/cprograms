#include <stdio.h>
#define SIZE 8
#define UPPERCASE
#define LOWERCASE
#define SQUARE(x)    x * x
#define ISLOWER(x)  (x >= 'a' && x <= 'z')
#define ISUPPER(x)  (x >= 'A' && x <= 'Z')
#define ADD(x, y)    (x + y)

int main(){
	int arr[SIZE];
	char c;
	int result;
	int  j;
	int i = 5;

	printf("Enter 2 number: ");
	scanf("%d%d", &i, &j);

	result = ADD(i, j);
	printf("add is %d\n", result);

	result = SQUARE(i);
	printf("square is %d\n", result);

	printf("Enter character\n");
	scanf("\n%c", &c);

	

	#ifdef LOWERCASE
	if(ISLOWER(c))
	{
		printf("%c is lower case character\n", c);
	}
	#endif

	#ifdef UPPERCASE
	if(ISUPPER(c))
	{
		printf("%c is upper case character\n", c);
	}
	#endif

	#if SIZE == 5
		printf("i is 5\n");
		printf("i = %d\n", i);
	#else
		printf("i is not 5\n");
		printf("i = %d\n", i);
	#endif


	return 0;
}

	

