#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int l=0;
	char s[100];
	char ch;

	clrscr();

	printf("Enter the string:\n");
	scanf("%[^\n]",&s);
	printf("Enter your character that you want to delete:\n");
	scanf("%s",&ch);
	while(s[l]!='\0')
	{
		if(s[l]==ch )
		{
			while(s[l]!='\0')
			{
				s[l]=s[l+1];
				l++;
			}
		}
		if(s[l+1]=='\0')
			s[l]='\0';
		l++;
	}
	printf("output the string:\n%s",s);
	getch();
}