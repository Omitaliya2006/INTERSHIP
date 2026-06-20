#include<stdio.h>
#include<conio.h>
void main()
{
	int power(int x,int y);
	int x,y,ans;

	clrscr();

	printf("Enter the number:\n");
	scanf("%d",&x);
	printf("Enter the power number:\n");
	scanf("%d",&y);
	ans=power(x,y);
	printf("power(x,y): %d",ans);
	getch();
}
int power(int x,int y)
{
	int i,sum=1;
	for(i=1;i<=y;i++)
	{
		sum=sum*x;
	}
	return sum;
}