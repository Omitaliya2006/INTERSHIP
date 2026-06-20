#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k;

	clrscr();

	for(i=0;i<=5;i++)
	{
		for(k=i;k<=5;k++)
			printf("  ");
		for(j=i;j>=0;j--)
			printf("%d ",j);

		for(j=1;j<=i;j++)
			printf("%d ",j);
		printf("\n");

	}
	getch();
}
