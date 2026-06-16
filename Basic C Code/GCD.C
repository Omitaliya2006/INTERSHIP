#include<stdio.h>
#include<conio.h>
void main()
{
	int l,k,r,temp;

	clrscr();

	scanf("%d%d",&l,&k);

	if(k>1)
	{
		temp=l;
		l=k;
		k=temp;
	}
	while(k!=0)
	{
		r=l%k;
		if(r!=0)
		{
			l=k;
			k=r;
		}
		else
		{
			printf("GCD= %d",k);
			break;
		}
	}
	getch();
}