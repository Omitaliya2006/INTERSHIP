#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	int a[100],i,max=0;

	clrscr();
	printf("Enter the element:\n");
	scanf("%d",&n);

	printf("Enter the value:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	printf("Max value: %d",max);

	getch();
}