#include <stdio.h>
#include <stdlib.h>

int main() {
     FILE *fp1=NULL,*fp2=NULL;
     char c;
     fp1=fopen("input.txt", "r");

     if(fp1 == NULL) {
         printf("Unable to open file");
         exit(-1);
     }     

     while( (c = fgetc(fp1)) != EOF) {
         printf("%c", c);
     }
     fclose(fp1);
  
}

