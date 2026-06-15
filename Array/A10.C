#include<stdio.h>
#include<conio.h>
void main()
{
	int n,a[100],i,j,temp;

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
		for(j=i+1;j<n;j++)
		{
			if(a[i]<0)
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("Negative at bottom\n");
	for(i=0;i<n;i++)
		printf("%d  ",a[i]);

	getch();
}