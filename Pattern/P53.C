#include<stdio.h>
#include<conio.h>
void main()
{
	int i=0,j=1,k;
	char ch='*';

	clrscr();

	while(i<=5)
	{
		if(j<=5)
		{
			for(k=1;k<=j;k++)
				printf("%c",ch);

		}
		printf("\n");
		j=j+i;
		i=j-i;


	}
	getch();
}