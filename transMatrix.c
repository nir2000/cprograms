#include<stdio.h>
int main()
{
	int arr[3][4]={1,2,3,4,
			5,6,7,8,
			9,10,11,12};
	int i,j;
	int transmatrix[4][3];

	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			transmatrix[j][i]=arr[i][j];
		}
	}
	for(i=0;i<4;i++){
		for(j=0;j<3;j++)
		{
			printf(" %d",transmatrix[i][j]);
		}
	printf("\n");
	}

	return 0;
}