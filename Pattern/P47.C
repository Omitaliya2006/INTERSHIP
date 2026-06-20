#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k;
	char ch;

	clrscr();

	for(i=1;i<=5;i++)
	{
		for(k=i;k<=5;k++)
			printf("  ");
		ch='A';
		for(j=1;j<=(2*i-1);j++)
		{
			printf("%c ",ch);
			ch=ch+2;
		}
		printf("\n");
	}
	for(i=4;i>=1;i--)
	{
	      for(k=i;k<=5;k++)
			printf("  ");
		ch='A';
		for(j=1;j<=(2*i-1);j++)
		{
			printf("%c ",ch);
			ch=ch+2;
		}
		printf("\n");
	}
	getch();
}