#include<stdio.h>
#include<conio.h>
void main()
{
	int s[20],i,j,n,temp;

	clrscr();

	printf("Enter the array size: \n");
	scanf("%d",&n);
	printf("Enter the number\n");
	for(i=0;i<n;i++)
		scanf("%d",&s[i]);

	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(s[i]>s[j])
			{
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
		}
	}
	printf("Sorted Array\n");
	for(i=0;i<n;i++)
		printf("%d ",s[i]);
	getch();

}