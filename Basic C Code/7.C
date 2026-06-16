#include<stdio.h>
#include<conio.h>
void main()
{
	float n,i,j,temp;
	float sum=0;

	clrscr();

	printf("Enter the number");
	scanf("%f",&n);

	for(i=1;i<=n;i++)
	{
		temp=1;
		for(j=1;j<=i;j++)
			temp=temp*j;
		sum=sum+(1/temp);
	}

	printf("Sum of series %f",sum);

	getch();
}