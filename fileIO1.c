#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
     FILE *fp1=NULL, *fp2=NULL;
     char c;
    int count_upper;
    int count_lower;
    int count_space;

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
     
     count_upper=0;
     count_lower=0;
     count_space=0;
     while( (c = fgetc(fp1)) != EOF) {
     if(isupper(c))
	count_upper++;
    
     if(islower(c))
     	count_lower++;

     if(isspace(c))
	count_space++;     
     
     printf("%c", c);
         fputc(c, fp2);
     }
	printf("\n");
     
     fclose(fp1);
     fclose(fp2);
     printf("no of count_upeer case letters:%d\n", count_upper);
     printf("no of count_lower case letters:%d\n", count_lower);
     printf("no of count_spaces:%d\n", count_space);

}


