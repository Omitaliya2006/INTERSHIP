#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i,sum=0;

	clrscr();

	printf("Enter the 10 value:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		sum = sum + a[i];
	}
	printf("Sum of 10 value: %d",sum);

	getch();
}