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


int findMax(int *a, int size) {
    int m = *a;
    int i;

    for(i=0; i<size; i++) {
        if ( *(a+i) > m) {
            m = *(a+i);
        }
    }
    return m;
}

int findMin(int *a, int size) {
    int m = *a;
    int i;

    for(i=0; i<size; i++) {
        if ( *(a+i) < m) {
            m = *(a+i);
        }
    }
    return m;
}

int main() {

    int arr[10]= {10,20,30,40,50,60,70,80,90,100};
    int i, max,min;
    for(i=0; i<10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    max = findMax(arr,10);

    min = findMin(arr,10);

    printf("Max : %d\n", max);
    printf("Min : %d\n", min);

    rotateLeft(arr, 10, 2);
    printf("\nRotate Left: ");
    for(i=0; i<10; i++) {
        printf("%d ", arr[i]);
    }
    rotateRight(arr, 10, 4);
    printf("\nRotate right: ");
    for(i=0; i<10; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
    
}
