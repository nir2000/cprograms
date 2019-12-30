#include <stdio.h>
int main()
{
    int choice=1;
    int n;
        
    while(choice != 0){
       	printf("1.sunday\n");
    	printf("2.monday\n");
    	printf("3.tuesday\n");
    	printf("4.wednesday\n");
    	printf("5.friday\n");
    	printf("6.saturday\n");
    	printf("0.exit\n"); 

	printf("Enter choice:");
	scanf("%d",&choice);

	switch(choice){
 	    case 0:{
	        return 0;
		break;
	    }
	    case 1:{
		printf("sunday\n");
		break;
	    }
	    case 2:{
		printf("monday\n");
		break;
	    }
	    case 3:{
		printf("tuesday\n");
		break;
	    }
	    case 4:{
		printf("wednesday\n");
		break;
	    }
	    case 5:{
		printf("friday\n");
		break;
	    }
	    case 6:{
		printf("saturday\n");
		break;
	    }
	    default:break;
	}
    
    }	
	return 0;
}

