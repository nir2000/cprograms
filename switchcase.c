#include<stdio.h>

int add(int x, int y)
{
	int r;
	r = x + y;
	return r;
}
int mul(int x, int y)
{
	int r;
	r = x * y;
	return r;
}

int main()
{
	int choice = 1;
	int a, b, r;

    while(choice != 0)
    {
	printf("Enter two number: ");
	scanf("%d %d", &a, &b);
	printf("1.add\n");
	printf("2.multiply\n");
	printf("0.exit\n");
	printf("Enter choice:");
	scanf("%d", &choice);

	switch(choice){

	    case 0:{
	           return 0;
	           break;
	    }
	    case 1:{
	        r = add(a,b);
	        break;
	    }
	    case 2:{
	        r =mul(a,b);
	        break;
	    }
	    default:break;
	}
	printf("result is %d\n",r);
    
    }
    
	return 0;
}

