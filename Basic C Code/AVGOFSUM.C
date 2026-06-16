#include<stdio.h>
#include<conio.h>
void main()
{
	int number,avg;
	int sum=0;
	int i;

	clrscr();

	for(i=1;i<=5;i++)
	{
		scanf("%d",&number);
		sum += number;
	}
	printf("Avg of 5 number=%d",sum/5);

	getch();
}