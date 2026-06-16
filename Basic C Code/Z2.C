#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],i,n,temp;

	clrscr();

	printf("Enter the array size:\n");
	scanf("%d",&n);
	printf("Enter the number:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	for(i=0;i<n/2;i++)
	{
		temp=a[i];
		a[i]=a[n-1-i];
		a[n-1-i]=temp;
	}
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	getch();
}