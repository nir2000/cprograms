#include<stdio.h>
int main()
{
    int a[4][2]={ {1,2},
                  {3,4},
                  {5,6},
                  {7,8}};
    int (*p)[2];
    int i = 0,j = 0;

    for(i = 0; i < 4; i++){
	p = &a[i]; 
	printf("%u\n", p);
	printf("%d %u\n", *(*(p)), *(p));
	printf("%d %u\n", *(*(p)+1), (*(p)+1));
    }
    return 0;
}
