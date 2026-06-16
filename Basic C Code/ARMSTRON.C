#include<stdio.h>
#include<conio.h>
void main()
{
	int number,temp;
	int sum=0;

	clrscr();

	printf("Enter the Number:");
	scanf("%d",&number);
	temp=number;
	while(number>0)
	{
		sum=sum+ ((number%10)*(number%10)*(number%10));
		number=number/10;
	};
	if(temp == sum)
		printf("Number is Armstorng");
	else
		printf("Number is not Armstorng");

	getch();
}