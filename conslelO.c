#include<stdio.h>
#include<stdio.h>

int main()
{
    int i,j;
    char c, d;
    char a[20]="abcdef";
    char b[20];
    char e[20];
    i=0;
    while(a[i]!= '\0'){
        putchar(a[i]);
	i++;
    }
    putchar('\n');
    printf("Enter two strings:\n");
    scanf("%s %s",a,b);
    
    printf("\nyou entered:%s %s\n", a, b);
    while((getchar()) != '\n');

    printf("Enter char:\n");
    c=getchar();
    printf("\nYou entered:");
    putchar(c);

    printf("\nEnter long string:");
    gets(a);
    puts(a);

   return 0;
}

