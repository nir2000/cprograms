#include <stdio.h>
int main()
{
    int arr[10];
    int count=0;
    int sum;
    printf("Enter 10 number");
    for(count=0;count<10; count++)
    	{
    	scanf("%d",&arr[count]);
    	}
    for(count=0;count<10; count++) 
    	{	
        sum=sum+arr[count];
	printf("%d\n",sum);
	}
    return 0;
}
