#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i;
	float sum=0;

	clrscr();

	printf("Enter the number ");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		if(i%2!=0)
			sum=sum+(1.0/(i*i));
		else
			sum=sum-(1.0/(i*i));
	}
	printf("Sum  of series %f",sum);

	getch();
}