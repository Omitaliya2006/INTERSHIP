#include<stdio.h>
#include<conio.h>
void main()
{
	int number;
	int sum=0;
	int digit;

	clrscr();

	printf("Enter your number\n");
	scanf("%d",&number);

	while(number>0)
	{
		digit=number%10;
		if(digit%2!=0)
			sum=sum+digit;
		number=number/10;
	};
	printf("Sum of odd Digit=%d",sum);


	getch();

}