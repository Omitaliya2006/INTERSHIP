#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int reverse(char s1[],int l);
	int l=0;
	char s1[100];

	clrscr();

	printf("Enter the string:\n");
	scanf("%[^\n]",&s1);

	while(s1[l]!='\0')
	{
		l++;
	}
	printf("Reversed String \n%s",reverse(s1,l));
	getch();
}
int reverse(char s1[],int l)
{
	int i,j;
	char s2[100];
	for(i=0,j=l-1;i<=l-1;i++,j--)
	{
		s2[j]=s1[i];

	}
	s2[l]='\0';
	return s2;
}