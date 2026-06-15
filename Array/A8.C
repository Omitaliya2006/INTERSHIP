#include<stdio.h>
#include<conio.h>
void main()
{
	int n,a[100],i,p,j;

	clrscr();

	printf("Enter the element:\n");
	scanf("%d",&n);
	printf("Enter the value:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the element for delete:\n");
	scanf("%d",&p);
	for(i=0;i<n;i++)
	{
		if(a[i]==p)
		{
			while(i!=n)
			{
				a[i]=a[i+1];
				i++;
			}
		}
	}
	n--;
	printf("After deleting valued\n");
	for(i=0;i<n;i++)
		printf("%d  ",a[i]);

	getch();
}
