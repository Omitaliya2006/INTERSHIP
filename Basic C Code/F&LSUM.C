#include<stdio.h>
#include<conio.h>
void main()
{
	int number;
	int sum=0;

	clrscr();

	scanf("%d",&number);
	sum=sum+number%10;
	while(number>9)
	{
		number=number/10;
	}
	sum = sum+number;

	printf("Sum of frist and last digit of number=%d",sum);

	getch();

}