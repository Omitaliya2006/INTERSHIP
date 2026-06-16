#include<stdio.h>
#include<conio.h>
void main()
{
	float h,w;
	int i;
	int count=0;

	clrscr();

	for(i=0;i<5;i++)
	{
		printf("Enter the Height:");
		scanf("%f",&h);
		printf("Enter the Weight:");
		scanf("%f",&w);
		if(h>=170 && w<=50)
		{
			count++;
		}

	}
	printf("There are %d people having more than 170 height and less than 50 weight ",count);
	getch();
}
