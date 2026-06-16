#include<stdio.h>
#include<conio.h>
void main()
{
	int number;
	int flag=0;
	int i;

	clrscr();

	scanf("%d",&number);
	for(i=2;i<number;i++)
	{
		if(number%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("%d is Prime Number",number);
	}
	else
		printf("%d is not prime number",number);

	getch();
}