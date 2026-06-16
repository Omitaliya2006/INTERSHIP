#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;

	clrscr();

	printf("Enter the number\n");
	scanf("%d%d%d",&a,&b,&c);

	if(a>b)
	{
		if(a>c)
			printf("A is Maximum");
		else
			printf("C is Maximum");
	}
	else
	{
		if(b>c)
			printf("B is Maximum");
		else
			printf("C is Maximum");
	}
	getch();
}
