#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
     FILE *fp1 = NULL, *fp2 = NULL;
     char char_array[80];
   
     fp1 = fopen("input.txt", "r");
     fp2 = fopen("output.txt", "w+");

     if(fp1 == NULL) {
         printf("Unable to open file");
         exit(-1);
     }
    if(fp2 == NULL) {
         printf("Unable to open file");
         exit(-1);
     }    
     
     
     while( (fgets(char_array, 80, fp1)) != NULL) {
     
     printf("%s", char_array);
         fputs(char_array, fp2);
     }
	printf("\n");
     
     fclose(fp1);
     fclose(fp2);
     
}

