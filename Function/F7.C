#include<stdio.h>
#include<conio.h>
int a,b;
void main()
{
	int sum(int a,int b);

	clrscr();

	printf("Enter the number a: ");
	scanf("%d",&a);
	printf("Enter the number b: ");
	scanf("%d",&b);
	sum(a,b);
	//printf("Sum of 1 to %d number: %d",n,ans);
	getch();
}
int sum(int a,int b)
{
	int temp;

	temp=a;
	a=b;
	b=temp;
	printf("Number a:%d\n",a);
	printf("Number b:%d\n",b);
}