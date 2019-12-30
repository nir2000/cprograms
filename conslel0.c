#include<stdio.h>
#include<stdio.h>
int main()
{
    int i,j;
    char c, d;
    char name[20];

    printf("Enter number:\n");
    scanf("%d %d",&i,&j);
    fflush(stdin);
    printf("you entered:%d %d\n",i,j);

    printf("Enter char:\n");
    fflush(stdin);
    c=getchar();
    putchar(c);
    gets(name);
    puts(name);

   return 0;
}

