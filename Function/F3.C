#include<stdio.h>
#include<conio.h>
void main()
{
	int sum(int n);
	int n,ans;

	clrscr();

	printf("Enter the number:\n");
	scanf("%d",&n);
	ans=sum(n);
	printf("Sum of square of 1 to %d number: %d",n,ans);
	getch();
}
int sum(int n)
{
	int i,sum=0;
	for(i=0;i<=n;i++)
	{
		sum=sum+(i*i);
	}
	return sum;
}