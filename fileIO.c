#include <stdio.h>
#include <stdlib.h>

int main()
{
     FILE *fp1=NULL, *fp2=NULL;
     char c;
     fp1 = fopen("input.txt", "r");
     fp2 = fopen("output.txt", "w");

     if(fp1 == NULL) {
         printf("Unable to open file");
         exit(-1);
     }
    if(fp2 == NULL) {
         printf("Unable to open file");
         exit(-1);
     }    
     

     while( (c = fgetc(fp1)) != EOF) {
         printf("%c", c);
         fputc(c, fp2);
     }

     fclose(fp1);
     fclose(fp2);
}


