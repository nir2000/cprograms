#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct student {
         char name[30];
         int sem;
         int totalmarks;
         struct student *next;
    };

    void printDetailsForSem(struct student *head, int sem) {
    	while(head != NULL){
            if(head->sem == sem){
	        printf("%s %d %d\n", head->name, head->sem, head->totalmarks);		
	    }  
	head = head->next;  	
        }
	return;
    }

    void printDetailsAboveTotalMarks(struct student *head, int totalmarks) {
    	while(head != NULL){
  	    if(head->totalmarks >=totalmarks){
		printf("%s %d %d\n", head->name, head->sem, head->totalmarks);	        
	    }
	head = head->next;
	}
	return;
    }

int main() {
    
    struct student *head = NULL,*s = NULL, *t = NULL;
    int i, count;
    int sem, totalmarks;

    printf("How many students' details do you wish to enter ? ");
    scanf("%d", &count);

    printf("Enter details: \n");
    for (i = 0; i < count; i++) {
        t = (struct student *) malloc(sizeof(struct student) );
        printf("Enter name: ");
        scanf("%s", t->name);
        printf("Enter Sem: ");
        scanf("%d", &t->sem);
        printf("Enter TotalMarks: ");
        scanf("%d", &t->totalmarks);
        t->next = NULL;
        if ( head == NULL) {
             s = t;
             head = s;
        }
        else
        {
            s->next = t;
            s = s->next;
        }

    }
    
    t = head;

    for(i = 0; i < count; i++) {
        printf("%s\t%d\t%d\n", t->name, t->sem, t->totalmarks);
        t = t->next;
    }

    printf("enter Semester:");
    scanf("%d", &sem);
    printDetailsForSem(head, sem);
    printf("Enter TotalMarks:");
    scanf("%d", &totalmarks);
    printDetailsAboveTotalMarks(head, totalmarks); 

    return 0;
}


