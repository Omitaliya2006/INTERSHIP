#include<stdio.h>
#include<conio.h>
void main()
{
	int palindrome(int a);
	int n,ans,i,a;

	clrscr();

	printf("Enter the number:\n");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		a=i*i;
		ans=palindrome(a);
		if(ans==a)
			printf("%d ",i);
	}
	getch();
}
int palindrome(int a)
{
	int rev=0,temp;
	temp=a;

	while(a/10!=0)
	{
		rev=rev*10+a%10;
		a=a/10;
	};
	rev=rev*10+a%10;
    //	printf("%d\n",temp);
      //	printf("%d\n",rev);
	if(temp==rev)
		return temp;
	else
		return 0;
}