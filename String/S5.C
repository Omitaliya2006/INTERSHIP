#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int l=0,count=1,i;
	char s[100];
	char ch,c;

	clrscr();

	printf("Enter the string:\n");
	scanf("%[^\n]",s);
	fflush(stdin);
	while(s[l]!='\0')
		l++;
	printf("Enter your character which you dont want:\n");
	scanf("%c",&ch);
	fflush(stdin);
	printf("Enter the your character that you want\n");
	scanf("%c",&c);

	for(i=0;i<l;i++)
	{
		if(s[i]==ch)
		{
			 s[i]=c;
			 count=0;
		}
	}
	if(count==1)
		printf("Character is not found\n");
	printf("Your character:\n%s",s);
	getch();
}