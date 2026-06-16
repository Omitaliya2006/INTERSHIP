#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,j,temp=1,p;
	int sum=0;

	clrscr();

	printf("Enter the number");
	scanf("%d",&n);
	printf("Enter the power");
	scanf("%d",&p);

	for(i=1;i<=p;i++)
	{
		temp=temp*n;
		sum=sum+temp;
	}

	printf("Sum of series %d",sum);

	getch();
}