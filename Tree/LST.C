#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,s[100],n,found,count=0;

	clrscr();

	printf("Enter the array size:\n");
	scanf("%d",&n);
	printf("Enter the number:\n");
	for(i=0;i<n;i++)
		scanf("%d",&s[i]);

	printf("Enter the number that you want found:\n");
	scanf("%d",&found);
	for(i=0;i<n;i++)
	{
		if(found == s[i])
		{
			printf("\n%d is found at %d position\n",s[i],i+1);
			count++;
		}
	}
	if(count==0)
		printf("%d is not found\n",found);

	getch();
}