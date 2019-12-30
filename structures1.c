#include<stdio.h>
#include<string.h>

int main()
{
    struct student {
	char name[20];
	int sem;
	int marks;
    };

    struct student s[5];
    int i;
    printf("Enter details: \n");
    for(i = 0; i < 5; i++)
    {
	printf("Enter name:\n");
	scanf("%s", s[i].name);
	printf("Enter sem:\n");
	scanf("%d", &s[i].sem);
	printf("Enter marks:\n");
	scanf("%d", &s[i].marks);
    }

    for(i = 0; i < 5; i++)
    {
	printf("%s\t%d\t%d\n", s[i].name, s[i].sem, s[i].marks);
    }
    return 0;
}

