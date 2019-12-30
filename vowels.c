#include<stdio.h>
int main()
{
    int choice;
    char c;
    printf("Enter character: ");
    scanf("%c",&c);
  
    switch(c)
    {
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':{
		  printf("it is a vowel\n");
                  break;
	}
	default:{
		printf("it is a consonant\n");
		break;
	}

    }
    return 0;
}
