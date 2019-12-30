#include <stdio.h>
#include <string.h>

int main()
{
    char str1[20], str2[20], str3[20];
    int i = 0;

    printf("Enter string1:");
    scanf("%s", str1);
    printf("Enter string2:"); 
    scanf("%s", str2);
 
    while(str1[i] != 0)
        i++;
    printf("length (without using std lib function): %d\n", i);
    printf("length (with using std lib function): %d\n", i);

    if(strcmp(str1, str2) == 0)
    {
        printf("strings are equal\n");
    }
    else
    {
	printf("strings are not equal\n");
    }
    
    printf("string copy:\n");
    strcpy(str2, str1); 
    printf("%s\n", str2);

    return (0);
}

