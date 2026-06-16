#include<stdio.h>
#include<conio.h>
void main()
{
	int number;
	int max=0;

	clrscr();

	scanf("%d",&number);
	while(number>0)
	{
		if(number%10>max)
			max=number%10;
		number=number/10;
	};
	printf("Max digit in number %d",max);

	getch();
}