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
	printf("Sorted values in asecending\n");
	for(i=0;i<n-1;i++)
	{
		for(j=i;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	getch();
}