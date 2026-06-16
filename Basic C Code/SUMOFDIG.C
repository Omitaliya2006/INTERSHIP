#include<stdio.h>
#include<conio.h>
void main()
{
	int digit;
	int sum=0;

	clrscr();

	scanf("%d",&digit);
	while(digit>0)
	{
	sum = sum + (digit%10);
	digit = digit/10;
	};
	printf("Sum of Digit=%d",sum);

	getch();
}