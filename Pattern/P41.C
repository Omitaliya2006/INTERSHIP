#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k;
	char ch='A'-1;
	clrscr();

	for(i=1;i<=5;i++)
	{
		for(k=i;k<=5;k++)
			printf(" ");
		for(j=i;j>=1;j--)
			printf("%c",ch+j);
		printf("\n");
	}

	getch();
}