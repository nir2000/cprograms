#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char *names[5];
    char n[50];
    int len;
    char *p;
    int i;

    for(i = 0; i < 5; i++){
	printf("enter name: ");
	scanf("%s", n);
	len= strlen(n);
	p = (char *)malloc(len * sizeof(char));
	strcpy(p, n);
	names[i] = p;
    }
    printf("you entered: \n");

    for(i = 0; i < 5; i++){
	printf("%s\n", names[i]);
    }
    return 0;
}

