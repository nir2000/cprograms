#include <stdio.h>
#include <stdlib.h>

typedef struct Polynomial {
    int coeff;
    int expo;
} p;

p p1[10],p2[10],p3[10];

int readPolynomial(p p1[]) {
    int n, i;
    printf ("\nEnter number of terms in the polynomial ( Max: 10) : ");
    scanf("%d", &n);
    fflush(stdin);
    printf("\nEnter the polynomial in the descending order of exponents : \n");

    for(i=0; i<n ; i++ ){
        printf ("Coefficient : ");
        scanf("%d", &p1[i].coeff);
        fflush(stdin);
        printf("Exponent : ");
        scanf("%d", &p1[i].expo);
        fflush(stdin);
    }

    return n;
}

void Print(int n, p poly[]) {
    int i;
    for (i=0; i<n;i++) {
        printf(" %d x ^ %d + ", poly[i].coeff , poly[i].expo);    
    }
    printf("\n");
    return;
}


int addPoly(p p1[] , int t1, p p2[], int t2,  p p3[]) {
    int n1=0,n2=0,n3=0;

    while ( n1 < t1 && n2 < t2) {
        if( p1[n1].expo == p2[n2].expo) {
            p3[n3].coeff = p1[n1].coeff + p2[n2].coeff;
            p3[n3].expo = p1[n1].expo;
            n1++;
            n2++;
            n3++;            
        }
        else if ( p1[n1].expo > p2[n2].expo) {
            p3[n3].coeff = p1[n1].coeff;
            p3[n3].expo = p1[n1].expo;
            n1++;
            n3++;
        }
        else 
        {
            p3[n3].coeff = p2[n2].coeff;
            p3[n3].expo = p2[n2].expo;
            n2++;
            n3++;
        }
    }

    while ( n1 < t1 ) {
        p3[n3].coeff = p1[n1].coeff;
        p3[n3].expo = p1[n1].expo;
        n1++;
        n3++;
    }

    while ( n2 < t2 ) {
        p3[n3].coeff = p2[n2].coeff;
        p3[n3].expo = p2[n2].expo;
        n2++;
        n3++;
    }

    return n3;
}

int main() {
    int num1, num2, num3;
    int c;
    num1 = readPolynomial(p1);
    printf ("You entered polynomial : \n");
    Print(num1, p1);
    
    num2 = readPolynomial(p2);
    printf ("You entered polynomial : \n");
    Print(num2, p2);

    num3 = addPoly(p1,num1,p2,num2,p3);
    printf("Polynomials entered: \n");
    Print(num1, p1);
    Print(num2, p2);
    printf("Sum of above two polynomials : \n");
    Print(num3, p3);
    return 0;
       
}
