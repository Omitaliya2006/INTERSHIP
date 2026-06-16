#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,temp=1,p;
	int sum=1;

	clrscr();

	printf("Enter the power");
	scanf("%d",&p);

	for(i=1;i<=p;i++)
	{
		temp=temp*2;
		sum=sum+temp;
	}

	printf("Sum of series %d",sum);

	getch();
}