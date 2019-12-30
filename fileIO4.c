#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    FILE *fp1 = NULL, *fp2 = NULL, *fp3 = NULL;
    char name[30];
    int age;
    int sem;

    struct employee {
        char name[30];
        int age;
        char city[15];
    };

    struct employee e;
   
    fp1 = fopen("input.txt", "r");    
    if(fp1 == NULL) {
        printf("Unable to open file");
        exit(-1);
    }
       
    fp2 = fopen("employee.dat", "wb");
    while( (fscanf(fp1, "%s %d %s", e.name, &e.age, e.city ) ) != EOF) {          
        printf("%s %d %s\n", e.name, e.age, e.city);      
        fwrite(&e, sizeof(e), 1, fp2);        
    }
    fclose(fp2);

    printf("Reading from employee.dat file...\n");

    fp3 = fopen("employee.dat", "rb");

    while( fread(&e, sizeof(e), 1, fp3) == 1) {
        printf("%s %d %s\n", e.name, e.age, e.city);
    }
   
    printf("\n");    

    fclose(fp1);    
    fclose(fp3);
    return 0;
}
