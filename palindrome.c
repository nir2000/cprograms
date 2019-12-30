#include<stdio.h>

int main()
{
	char s1[20];
	int i, j, flag = 1;
	int middle;

	printf("Enter string: ");
	fgets(s1, 20, stdin);
	/*scanf("%c",s1);*/

	while(s1[i] != '\n')
		i++;
		i = i - 1;
		middle = i / 2;

	for(j = 0; j < middle; j++, i--)
	{
		if(s1[i] != s1[j])
		{
			printf("not a palindrome string\n");
			flag = 0;
			break;
		}
	}
	if(flag)
	{
		printf("palindrome string\n");
	}
	return 0;
}




