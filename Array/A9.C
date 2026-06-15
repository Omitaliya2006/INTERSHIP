#include<stdio.h>
#include<conio.h>
void main()
{
	int n,a[100],i,j,k;

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
			if(a[i]==a[j])
			{
				for(k=j;k<n;k++)
					a[k]=a[k+1];
				n--;
			}
		}
	}
	printf("Removed dulpicate\n");
	for(i=0;i<n;i++)
		printf("%d  ",a[i]);

	getch();
}