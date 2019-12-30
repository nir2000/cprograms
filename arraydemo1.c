#include<stdio.h>
int main(){
    int *ptr;
    int i;
    ptr = &i; 
    i = 5;
     
    printf("%d %u\n",*ptr, ptr);
    ptr++;
    printf("%d %u\n",*ptr, ptr); 
    ptr--;
}

