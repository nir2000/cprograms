#include <stdio.h>
#include<string.h>

int main()
{
    char str1[10]="abcdef";
    char str2[10];

    char *p1="abcdef";
    char *p2;

    strcpy(str2,str1);
    printf("str2: %s \n",str2);

    p2=p1;
   
    printf("p2: %s\n", p2);
    return 0;
}

