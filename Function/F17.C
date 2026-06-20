#include<stdio.h>
#include<conio.h>
void main()
{
	int sum(int number);
	int number,ans;

	clrscr();
	printf("Enter the number:\n");
	scanf("%d",&number);
	ans=sum(number);
	printf("Sum of first and last digit of number= %d",ans);

	getch();

}
int sum(int number)
{
	int sum=0;
	sum=sum+number%10;
	while(number>9)
	{
		number=number/10;
	}
	sum = sum+number;
	return sum;
}

