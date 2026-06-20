#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int i,j,l=0;
	char s1[100],s2[100];


	clrscr();

	printf("Enter the string:\n");
	scanf("%[^\n]",&s1);
	i=0;
	j=0;
	while(s1[l]!='\0')
		l++;
	while(s1[i]==' ')
	{
		i++;
	}

	while(s1[i]!='\0')
	{
		s2[j]=s1[i];
		i++;
	       j++;
	}
	s2[l]='\0';

	printf("Left trim : %s",s2);

	getch();
}