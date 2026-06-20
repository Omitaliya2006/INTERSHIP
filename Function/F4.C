#include<stdio.h>
#include<conio.h>
void main()
{
	double sum(int n);
	int n;
	double ans;

	clrscr();

	printf("Enter the number:\n");
	scanf("%d",&n);
	ans=sum(n);
	printf("Avg of 1 to %d number: %f",n,ans);
	getch();
}
double sum(int n)
{
	int i;
	double sum=0;
	for(i=0;i<=n;i++)
	{
		sum=sum+i;
	}
	sum=sum/n;
	return sum;
}