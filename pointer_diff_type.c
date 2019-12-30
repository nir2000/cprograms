#include<stdio.h>
int main()
{
    int *intptr;
    char *charptr;

    int intArray[10]={1,2,3,4,5,6,7,8,9,10};
    char charArray[10]={'A','B','C','D','E','F','G','H','I','J'};

    intptr = intArray;
    charptr = charArray;

    printf("%d %u\n", *intptr, intptr);
    printf("%d %u\n", *(intptr + 1), intptr + 1);
    printf("%c %u\n", *charptr, charptr);
    printf("%c %u\n", *(charptr + 1), charptr + 1);
    return 0;
}
