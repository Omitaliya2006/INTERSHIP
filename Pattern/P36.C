#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k;
	char ch='A'-1;
	clrscr();

	for(i=1;i<=5;i++)
	{
		for(k=1;k<=i-1;k++)
			printf(" ");
		for(j=5;j>=i;j--)
			printf("%c",ch+i);

		printf("\n");

	}

	getch();
}