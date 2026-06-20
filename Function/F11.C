#include<stdio.h>
#include<conio.h>
void main()
{
	int palindrome(int n);
	int n,ans,i;

	clrscr();

	printf("Enter the number:\n");
	scanf("%d",&n);
	ans=palindrome(n);
	if(ans==1)
		printf("%d number is palindrome",n);
	else
		printf("%d number is not palindrome",n);
	getch();
}
int palindrome(int n)
{
	int i,rev=0,temp;
	temp=n;

       //	printf("%d\n",n);
	while(n/10!=0)
	{
		rev=rev*10+n%10;
		n=n/10;
	};
	rev=rev*10+n%10;
    //	printf("%d\n",temp);
      //	printf("%d\n",rev);
	if(temp==rev)
		return 1;
	else
		return NULL;
}