#include <stdio.h>

int main()
{
	int a, b;
	int add, sub, mul;
	float div;
	int choice=1;

	
	printf("Enter two number\n");
	scanf("%d%d", &a, &b);

	while(choice != 0)
	{
		printf("1.addition\n");
		printf("2.substraction\n");
		printf("3.multiplecation\n");
		printf("4.division\n");
		printf("0.exit\n");

		printf("Enter your choice\n");
		scanf("%d", &choice);

		switch(choice)
		{
			case 1:{
			add = a + b;
			printf("addition = %d\n", add);
			break;
			}
			case 2:{
			sub = a - b;
			printf("substracation = %d\n", sub);
			break;
			}
			case 3:{
			mul = a * b;
			printf("multiplecation = %d\n", mul);
			break;
			}
			case 4:{
			sub = a / b;
			printf("division = %f\n", div);
			break;
			}
			default:{
			break;
			}
		}
	}

	return 0;
}



