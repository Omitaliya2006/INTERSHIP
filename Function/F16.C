#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	void order(char s1[],int n);
	int n,i;
	char s1[100];

	clrscr();

	printf("Enter total no of name:\n");
	scanf("%d",&n);
	printf("Enter the name:\n");
	for(i=0;i<n;i++)
		scanf("%s\n",&s1[i]);
	order(s1,n);
	getch();
}
void order(char s1[],int n)
{
	int i,j;
	char temp;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(s1[i]>s1[j])
			{
				temp=s1[i];
				s1[i]=s1[j];
				s1[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
		printf("%s\n",s1[i]);
}