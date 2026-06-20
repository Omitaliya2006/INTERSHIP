#include<stdio.h>
#include<conio.h>
void main()
{
	int max(int a,int b,int c);
	int a,b,c,ans;

	clrscr();

	printf("Enter the number a:\n");
	scanf("%d",&a);
	printf("Enter the number b:\n");
	scanf("%d",&b);
	printf("Enter the number c:\n");
	scanf("%d",&c);
	ans=max(a,b,c);
	printf("Max number out of 3: %d",ans);
	getch();
}
int max(int a,int b,int c)
{
	if(a>b)
	{
		if(a>c)
			return a;
		else
			return c;
	}
	else
	{
		if(b>c)
			return b;
		else
			return c;
	}
}