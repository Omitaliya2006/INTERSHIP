#include<stdio.h>
#include<conio.h>
void main()
{
	int a[20],n,i,j,key;

	clrscr();

	printf("Enter the array size:\n");
	scanf("%d",&n);
	printf("Enter the number:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}


	for(i=1;i<n;i++)
	{
		key=a[i];
		j=i-1;
		while(j>=0 && a[j]>key)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=key;
	}
	printf("Sorted array:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	getch();
}



