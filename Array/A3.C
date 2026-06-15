#include<stdio.h>
#include<conio.h>
void main()
{
	int n,a[100],b[100],c[100],i;

	clrscr();

	printf("Enter the elements:\n");
	scanf("%d",&n);

	printf("Enter the array A:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the array B:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	printf("Corresponding element in array C:\n");
	for(i=0;i<n;i++)
	{
		c[i]=a[i]+b[i];
		printf("%d ",c[i]);
	}

	getch();
}