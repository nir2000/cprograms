#include <stdio.h>


int rotateLeft(int *a, int size, int positions) {
    int temp;
    int i,j;
    for(i=0; i<positions; i++) {        
        temp = *a;        
        for (j=0; j<size-1;j++) {
            *(a+j) = *(a+j+1);
        }       
        *(a+j)=temp;         
    }

    
return 0;
}

int rotateRight(int *a, int size, int positions) {
    int temp;
    int i,j,t;
    for(i=0; i<positions; i++) {        
        temp = *(a+size-1);        
        for (j=size-1; j>0;j--) {           
            *(a+j) = *(a+j-1);
        }       
        *(a+j)=temp;         
    }

    
return 0;
}


