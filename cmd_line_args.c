#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
    int i,j;
    char *names[6]={"rohit",
	       	    "palash",
	            "bhoomi",
                    "kalpa",
	            "geeta",
    	            "nami"};
    if(argc < 2){
        printf("not enough arguments passed. exit..\n");
	exit(-1);
	}
    for(i = 0; i < 6; i++){
        if(strcmp(names[i], argv[1]) == 0){
    	    printf("name is in the list.\n");
            break;
        }
    }
    i = atoi(argv[1]);
    j = atoi(argv[1]);
    printf("%d\n", i, j);
}
