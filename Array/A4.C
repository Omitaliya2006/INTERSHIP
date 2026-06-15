#include<stdio.h>
#include<conio.h>
void main()
{
	int n,a[100],i;
	int odd=0,even=0;
	clrscr();

	printf("Enter the element:\n");
	scanf("%d",&n);
	printf("Enter the value:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]%2==0)
			even++;
		else
			odd++;
	}
	printf("Total no of even value %d\n",even);
	printf("Total no of odd value %d\n",odd);

	getch();
}