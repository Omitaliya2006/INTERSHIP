#include<stdio.h>
#include<conio.h>
void main()
{
	int factorial(int n);
	int n,ans;

	clrscr();

	printf("Enter the number:\n");
	scanf("%d",&n);
	ans=factorial(n);
	printf("Sum of 1 to %d number: %d",n,ans);
	getch();
}
int factorial(int n)
{
	int i,sum=1;
	for(i=1;i<=n;i++)
	{
		sum=sum*i;
	}
	return sum;
}