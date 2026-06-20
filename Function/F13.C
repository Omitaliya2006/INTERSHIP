#include<stdio.h>
#include<conio.h>
void main()
{
	int GCD(int k,int l);
	int k,l,ans;

	clrscr();

	printf("Enter the number 1:\n");
	scanf("%d",&k);
	printf("Enter the number 2:\n");
	scanf("%d",&l);
	ans=GCD(k,l);
	printf("GCD of %d and %d : %d",k,l,ans);
	getch();
}
int GCD(int k,int l)
{
	int r,q,temp;
	if(k>1)
	{
		temp=l;
		l=k;
		k=temp;
	}
	while(k!=0)
	{
		q=l/k;
		r=l%k;
		if(r!=0)
		{
			l=k;
			k=r;
		}
		else
		{
			return k;
		}
	}
}