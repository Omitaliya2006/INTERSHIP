#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int i,l=0;
	char s1[100];


	clrscr();

	printf("Enter the string:\n");
	scanf("%[^\n]",&s1);
	while(s1[l]!='\0')
	{
		l++;
	}
	while(s1[l-1]==' ')
	{
		s1[l-1]='\0';
		l--;
	}

	printf("Right trim : %s",s1);

	getch();
}