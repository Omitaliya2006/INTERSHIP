#include<stdio.h>
#include<conio.h>
#include<string.h>
struct thing
	{
		int code;
		char name[20];
		int qty;
	};
void main()
{
	struct thing t[10],it;
	int i,j,n,temp,temp2;
	char ch;
	clrscr();

	printf("Enter the no of item:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("item:");
		scanf("%d %s %d",&t[i].code,&t[i].name,&t[i].qty);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(t[i].code>t[j].code)
			{
			     it=t[i];
			     t[i]=t[j];
			     t[j]=it;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("item:");
		printf("%d %s %d\n",t[i].code,t[i].name,t[i].qty);
	}
	getch();
}
