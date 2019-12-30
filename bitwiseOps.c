#include <stdio.h>

void convertToBin(int n) {
	
	int i=0;
	int bin[20];
	for (i=0; n>0; i++) {
		bin[i] = n%2;
		n=n/2;
	}

	for (i=i-1; i>=0; i--)
		printf("%d",bin[i]);
    printf("\n");
	return;
}


int main() {
    unsigned char i=10;
    unsigned char j=~i;

    convertToBin(i);
    printf("Ones complement of %d is %d\n", i, j);
    convertToBin(j);

    i=10;
    printf("\nRIGHT SHIFT Operator:\n");
    convertToBin(i);
    j = i >> 2;     // Right shift by 2 position
    printf("%d\n", j);
    convertToBin(j);
    
    printf("\nLEFT SHIFT Operator:\n");
    j = i << 2;     // Left shift by 2 positions
    printf("%d\n", j);
    convertToBin(j);
    printf("\n AND operation:\n");
    convertToBin(j);
    j = j & 16;      // To check if 5th bit from right is set to 1.
    
    if ( j== 0 )
        printf("Bit is not set\n");
    else
    {
            printf("Bit is set\n");
    }
    
    printf("\n OR Operation:\n");
    j=44;
    convertToBin(j);
    j = j | 16;      // To set 5th bit from right to 1.
    printf("%d\n", j);
    convertToBin(j);

    printf("XOR Operation:\n");

    j=56;
    convertToBin(j);
    j = j ^ 4;      // To toggle 3rd bit from right ON or OFF
    printf("%d\n", j);
    convertToBin(j);

    return 0;
}
