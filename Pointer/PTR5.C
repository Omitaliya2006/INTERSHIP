#include<stdio.h>
#include<conio.h>
void main()
{
	int n,*p[10],s[10],i,j,temp;


	clrscr();

	printf("Total number:\n");
	scanf("%d",&n);
	printf("Enter the number:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&s[i]);
		p[i]=&s[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(*p[i]>*p[j])
			{
				temp=*p[i];
				*p[i]=*p[j];
				*p[j]=temp;
			}
		}
	}
	printf("Sorted\n");
	for(i=0;i<n;i++)
		printf("%u  ",*p[i]);

	getch();

}