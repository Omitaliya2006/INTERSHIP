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
	struct thing t[10];
	int i,n,f;
	clrscr();

	printf("Enter the no of item:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("item:");
		scanf("%d %s %d",&t[i].code,&t[i].name,&t[i].qty);
	}
	printf("Enter the code for finding items\n");
	scanf("%d",&f);
	for(i=0;i<n;i++)
	{
		if(f==t[i].code)
		{
			printf("Name = %s & qty = %d",t[i].name,t[i].qty);
		}
	}
	getch();
}
