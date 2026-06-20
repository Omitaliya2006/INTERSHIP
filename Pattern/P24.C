#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k;

	clrscr();

	for(i=5;i>=1;i--)
	{
		for(k=5;k<=i-1;k++)
			printf(" ");
		for(j=i;j<=5;j++)
			printf("%d",i);

		printf("\n");
	}

	getch();
}