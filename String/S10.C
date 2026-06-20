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
		if(s1[i]>=65  && s1[i]<=91)
			s2[i]=s1[i]+32;
	}
	s2[l]='\0';
	printf("lower case : %s",s2);

	getch();
}