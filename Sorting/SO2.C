#include<stdio.h>
#include<conio.h>
void main()
{
	int s[25],i,j,n,temp,minindex=0;

	clrscr();

	printf("Enter the array size:\n");
	scanf("%d",&n);
	printf("Enter the number\n");
	for(i=0;i<n;i++)
		scanf("%d",&s[i]);

	for(i=0;i<n;i++)
	{
		minindex=s[i];
		for(j=i+1;j<n;j++)
		{
			if(minindex>s[j])
			{
				temp=s[j];
				s[j]=minindex;
				minindex=temp;
			}
			s[i]=minindex ;
		}
	}
	printf("Sorted Array\n");
	for(i=0;i<n;i++)
		printf("%d ",s[i]);
	getch();
}