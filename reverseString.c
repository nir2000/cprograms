#include<stdio.h>
#include<string.h>

void reverseString( char *n, char *r){
    int length;
    length=strlen(n);
    printf("length : %d\n",length);
    n=n+length-1;
    while(length !=0)
    {
    	*r=*n;
    	r++;
    	n--;
    	length--;
    }
    *r='\0';
    return;
}
int main()
{
    char *p;
    char name[15];
    char reversed_name[15];

    printf("Enter string:\n");
    scanf("%s", name);
    fflush(stdin);

    reverseString(name, reversed_name);

    printf("reversed name: %s\n",reversed_name);
    return 0;
}



