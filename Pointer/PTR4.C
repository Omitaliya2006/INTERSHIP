#include<stdio.h>
#include<conio.h>
void main()
{
	int change(int*,int*);
	int a,b;

	clrscr();
	printf("Number a:");
	scanf("%d",&a);
	printf("Number b:");
	scanf("%d",&b);

	change(&a,&b);
	getch();
}
int change(int *p1,int *p2)
{
	int temp;
	temp=*p1;
	*p1=*p2;
	*p2=temp;

	printf("Number a:%d\n",*p1);
	printf("Number b:%d\n",*p2);
}
