#include<stdio.h>
int main()
{
    int n;
    int f=1;
    int i;
    
    printf("Enter number");
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++)
    {
	if (i == 1 ) printf("n:\t"); 
	printf("%d\t", i);
    }

    printf("\n");
   
    for(i = 1; i <= n; i++)
    {
	if(i==1)  printf("n!:\t");

	f = f * i;
	printf("%d\t", f);
    }
    printf("\n");
	 
    
    
    return 0;
}
 




  
