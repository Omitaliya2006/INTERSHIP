#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int i,n,l=0;
	char s1[100],s2[100];


	clrscr();

	printf("Enter the string:\n");
	scanf("%[^\n]",&s1);
	while(s1[l]!='\0')
	{
		l++;
	}

	for(i=0;i<l;i++)
	{
		if(s1[i]>=97  && s1[i]<=123)
			s2[i]=s1[i]-32;
	}
	s2[l]='\0';
	printf("UPPER CASE : %s",s2);

	getch();
}