#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i;
	int sum=0;

	clrscr();

	printf("Enter the number");
	scanf("%d",&n);

	for(i=2;i<=n;i+=2)
		sum=sum+i;

	printf("sum of series %d",sum);

	getch();
}