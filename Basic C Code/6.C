#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,j,temp;
	int sum=0;

	clrscr();

	printf("Enter the number");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		temp=1;
		for(j=1;j<=i;j++)
			temp=temp*j;
		sum=sum+temp;
	}

	printf("Sum of series %d",sum);

	getch();
}