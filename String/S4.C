#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int l=0,count=1;
	char s[100];
	char ch;

	clrscr();

	printf("Enter the string:\n");
	scanf("%[^\n]",&s);
	printf("Enter your character:\n");
	scanf("%s",&ch);
	while(s[l]!='\0')
	{
		if(s[l]==ch)
		{
		       printf("Your character is at %d postion\n",l+1);
			count=0;
		}
		l++;
	}
	if(count==1)
		printf("Character is not found");

	getch();
}