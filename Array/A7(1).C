#include<stdio.h>
#include<conio.h>
void main()
{
	int i,p,a[100],n,num;

	clrscr();

	printf("Enter the array size:\n");
	scanf("%d",&n);
	printf("Enter the number:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	printf("Enter the Position:\n");
	scanf("%d",&p);
	printf("Enter the insert number:\n");
	scanf("%d",&num);

	for(i=n;i>p;i--)
		a[i]=a[i-1];

	a[p]=num;
	n++;

	for(i=0;i<n;i++)
		printf("%d ",a[i]);

	getch();
}