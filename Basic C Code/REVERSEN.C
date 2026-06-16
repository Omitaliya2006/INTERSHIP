#include<stdio.h>
#include<conio.h>
void main()
{
	long int number;
	long int sum=0;

	clrscr();

	scanf("%ld",&number);
	while(number>0)
	{
		sum=(sum*10)+(number%10);
		number=number/10;
	}
	printf("Reverse Number %ld",sum);

	getch();
}