#include<stdio.h>
#include<conio.h>
void main()
{
	int mark;
	int sum=0;
	int i,j;

	clrscr();

	for(i=0;i<5;i++)
	{
		sum=0;
		printf("Enter the Marks of %d Student\n",i+1);
		for(j=0;j<3;j++)
		{
			scanf("%d",&mark);
			sum=sum+mark;
		}
		printf("Average of %d Student= %d\n",i+1,sum/3);
	}
	getch();
}