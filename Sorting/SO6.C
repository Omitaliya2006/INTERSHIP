#include<stdio.h>
#include<conio.h>
void main()
{
	int n,a[100];
	int i,j,max;
	int s[100],b[100];

	clrscr();

	printf("Enter the array size:\n");
	scanf("%d",&n);
	printf("Enter the number:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	max=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	for(j=1;max/j>0;j=j*10)
	{
		for(i=0;i<10;i++)
		{
			s[i]=0;
		}
		for(i=0;i<n;i++)
		{
			s[(a[i]/j)%10]++;
		}
		for(i=1;i<10;i++)
		{
			s[i]=s[i]+s[i-1];
		}
		for(i=n-1;i>=0;i--)
		{
			b[s[(a[i]/j)%10]-1]=a[i];
			s[(a[i]/j)%10]--;
		}
		for(i=0;i<n;i++)
		{
			a[i]=b[i];
		}
	}
	printf("Sorted Array:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	getch();
}