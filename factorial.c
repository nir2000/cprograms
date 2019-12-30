#include <stdio.h>

int fact(int n){
    
    if(n == 1)
    	return 1;
    return n * fact(n-1);
}

int main()
{
    int num;
    int result;

    printf("enter number\n");
    scanf("%d", &num);
    fflush(stdin);
    
    result = fact(num);
    printf("factorial of the number = %d\n", result);

    return 0;
}
