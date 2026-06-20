#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int i,l,a=0,b=0,c=0;
	char s[100];

	clrscr();

	printf("Enter the string:\n");
	scanf("%[^\n]",&s);
	while(s[l]!='\0')
		l++;
	fflush(stdin);
	i=0;
	while(s[i]!='\0')
	{
		if(s[i]>=65 && s[i]<=91)
		{
			a++;
		}
		else if(s[i]>=97 && s[i]<=123)
		{
			b++;
		}
		else
		{
			c++;
		}
		i++;
	};
	printf("Total no of Upper case letter is %d\n",a);
	printf("Total no of Lower case letter is %d\n",b);
	printf("Total no of special character is %d\n",c);

	getch();
}