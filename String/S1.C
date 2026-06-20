#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int l=0;
	char s[100];

	clrscr();

	printf("Enter the string\n");
	scanf("%[^\n]",&s);
	while(s[l]!='\0')
	{
		l++;
	}
	printf("length of string %d",l);

	getch();
}
