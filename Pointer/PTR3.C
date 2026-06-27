#include<stdio.h>
#include<conio.h>
void main()
{
	int n,*p;

	clrscr();

	printf("Enter the number:");
	scanf("%d",&n);
	p=&n;

	*p=*p+1;

	printf("Number, %u",n);
	getch();

}