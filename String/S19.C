#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int i,l1=0,l2;
	char s1[100],s2[100];

	clrscr();

	printf("Enter the stirng:\n");
	scanf("%[^\n]",s1);
	while(s1[l1]!='\0')
		l1++;

	for(i=0;i<l1;i++)
		s2[i]=s1[i];
	s2[l2]='\0';
	printf("String Copy :\n%s",s2);


	getch();
}