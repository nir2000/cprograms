#include<stdio.h>
void concatString(char *p1, char *p2)
{
    while(*p1 !='\0')
    {
        p1++; 
    }
    while(*p2 != '\0')
    {   
         *p1 = *p2;  
         p1++;  
         p2++;  
    } 
    *p2 = '\0'; 
    return; 
}
int indexofchar(int *p, char n)
    int count = 0;
    while(*p != '\0'){
        if(*p == c)
    	break;
    count++;
    p++;
    return count(0);     
    }

int main() 
{ 
    char s1[] = "abcdefg"; 
    char s2[10]; 
    copyString(s1,s2); 
    printf("%s\n",s2); 
    printf("concatnation:\n"); 
    char t1[] = "abcd"; 
    char t2[] = "efgh"; 
    printf("%s\n",t1);
    return 0; 
}
