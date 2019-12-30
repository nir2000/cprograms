#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
     FILE *fp1 = NULL, *fp2 = NULL;
     char name[30];
	int age;
	int sem;
   
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
     
     
     while( (fscanf(fp1, "%s %d %d\n",name, &age, &sem)) != EOF) {
     
     printf("%s %d %d\n", name, age, sem);
         fprintf(fp2,"%d %s %d\n", age, name, sem);
     }
	printf("\n");
     
     fclose(fp1);
     fclose(fp2);
     
}
