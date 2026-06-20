#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int l=0,i,j;
	char s1[100],s2[100];
	char ch;

	clrscr();

	printf("Enter the string:\n");
	scanf("%[^\n]",&s1);

	while(s1[l]!='\0')
	{
		l++;
	}
	for(i=0,j=l-1;i<=l-1;i++,j--)
	{
		s2[j]=s1[i];

	}
	s2[l]='\0';
	printf("Reversed String \n%s\n",s2);
	printf("Plus 1 Character:\n");
	for(i=0;i<l;i++)
		printf("%c",s2[i]+1);
	getch();
}