#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k;
	char ch='Z'+1;
	clrscr();

	for(i=1;i<=5;i++)
	{
		for(k=i;k<=5;k++)
			printf(" ");
		for(j=1;j<=i;j++)
		{
			printf("%c ",ch-j);
		}
		printf("\n");

	}

	getch();
}