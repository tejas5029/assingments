#include<stdio.h>
main()
{
	char ch;
	printf("enter a letter:");
	scanf("%c",&ch);
	switch(ch)
	{
		case 'a':
			printf("it is a vowel");
			break;
		case 'e':
			printf("it is a vowel");
			break;
		case 'i':
			printf("it is a vowel");
			break;
		case 'o':
			printf("it is a vowel");
			break;
		default:
		printf("it is a consonant");
		}
}
