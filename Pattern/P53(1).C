#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j=1,k;
	char ch='*';

	clrscr();

	for(i=1;i<=5;i++)
	{
			if(i==1 || i==2)
			{
				printf("*");
			}
			else if(i==4 || i==5)
			{
				for(k=1;k<=3;k++)
					printf("*");
			}
			else
			{
				for(j=1;j<=i-1;j++)
					printf("%c",ch);
			}
			printf("\n");

	}
	getch();
}

