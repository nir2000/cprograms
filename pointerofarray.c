#include<stdio.h>
int main()
{
    int a[4][2]={ {1, 2},
                  {3, 4},
                  {5, 6},
                  {7, 8}};
    int (*p)[2];
    int i = 0, j = 0;
    int *pint;

    for(i = 0; i < 4; i++){
	p = &a[i]; 
	pint=(int *)p;
        printf("%d %u\n",  *pint, pint);
        printf("%d %u\n", *(pint+1), pint+1);
	printf("%d %u %u\n", *(*(p)), *(p), p);
	printf("%d %u\n", *(*(p)+1), (*(p)+1));
    }
    return 0;
}
