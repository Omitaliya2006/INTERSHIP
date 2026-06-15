#include<stdio.h>
#include<conio.h>
void main()
{
	int n[100],p,i,temp;

	clrscr();

	printf("Enter the total no of element:\n");
	scanf("%d",&p);
	printf("Enter the number:\n");
	for(i=0;i<p;i++)
	{
		scanf("%d",&n[i]);
	}
	for(i=0;i<p;i++)
	{
		if(i%2==0)
		{
		       temp=n[i];
		       n[i]=n[i+1];
		       n[i+1]=temp;
		 }
	}
	printf("\n\n");
	for(i=0;i<p;i++)
	{
		printf("%d\n",n[i]);
	}
	getch();
}
