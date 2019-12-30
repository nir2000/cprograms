#include<stdio.h>
int main()
{
    int i;
    scanf("%d", &i);
    (i?printf("amit\n"):printf("all and sundry\n"));
    char a = 'Z';
    printf("%c", (a <= 'a'?a:'!'));
    return 0;
}
