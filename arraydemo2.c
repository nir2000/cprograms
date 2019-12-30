#include<stdio.h>
void copyString(char *p1,char *p2){
    while(*p1 !='\0'){
    p1++; 
    }
     while(*p2 != '\0'){  
    	 *p1 = *p2; 
         p1++; 
         p2++; 
    }
    *p2 = '\0';
    return;
}    

int main()
{
    char s1[] = "abcdefg";
    char s2[10];

    copyString(s2, s1);

    printf("%s\n", s2);
    printf("concatnation:\n");
    char t1[] = "abcd";
    char t2[] = "efgh";
    printf("%s\n", t1);
}
    	

