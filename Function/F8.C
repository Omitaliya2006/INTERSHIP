#include<stdio.h>
#include<conio.h>
void main()
{
	int sum(int n);
	int n,ans;

	clrscr();

	printf("Enter the number:\n");
	scanf("%d",&n);
	ans=sum(n);
	if(ans==1 || n==2)
		printf(" %d number is prime",n);
	else
		printf(" %d number is not prime",n);
	getch();
}
int sum(int n)
{
	int i,sum=0;
	for(i=2;i<n;i++)
	{
		if(n%i!=0)
		       sum=1;
		else
		{
			sum=0;
			break;
		}
	}
	if(sum==1)
		return 1;
	else
		return NULL;
	return sum;
}