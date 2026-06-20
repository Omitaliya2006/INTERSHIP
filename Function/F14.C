#include<stdio.h>
#include<conio.h>
void main()
{
	int max(int n[],int m);
	int n[100],m,i,ans;

	clrscr();
	printf("Enter the total number:\n");
	scanf("%d",&m);
	printf("Enter the number:\n");
	for(i=0;i<m;i++)
		scanf("%d",&n[i]);
	printf("%d",ans=max(n,m));


	getch();
}
int max(int n[],int m)
{
	int i,j,a,b;
	for(i=0;i<m;i++)
	{
	      //	printf("%d\n",n[i]);
		for(j=i+1;j<m;j++)
	       {
			if(n[i]>n[j])
			{
				a=n[i];
				n[i]=n[j];
				n[j]=a;
			}
	       }

	// printf("%d\n",n[i]);
	}
	b=n[m-1];
	return b;
}