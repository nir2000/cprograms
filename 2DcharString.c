#include<stdio.h>
int main(){
char names[6][10]={"rohit",
		    "palash",
		    "bhoomi",
		    "kalpa",
		    "geeta",
    		    "nami"};
    int i=0;
    char *t;

    for(i=0; i<6;i++){
	printf("%s\n", names[i]);
    }
    return 0;
}

