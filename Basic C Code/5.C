#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i;
	int sum=1;

	clrscr();

	printf("Enter the number");
	scanf("%d",&n);

	for(i=2;i<=n;i++)
	{
		if(i%2==0)
			sum=sum+(i*i);
		else
			sum=sum-(i*i);
	}

	printf("Sum of series %d",sum);

	getch();
}