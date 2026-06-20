#include<stdio.h>
#include<conio.h>
void main()
{
	int factor(int n);
	int i,n,ans;

	clrscr();

	printf("Enter the number:\n");
	scanf("%d",&n);
	printf("Factor of %d number:\n",n);
	factor(n);
	getch();
}
int factor(int n)
{
	int i;
	for(i=2;i<=n;i++)
	{
		if(n%i==0)
		{
			printf("%d  ",i);
		}
	}
}