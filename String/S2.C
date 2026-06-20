#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int l=0,i,count=1;
	char s[100];

	clrscr();

	printf("Enter the string:\n");
	scanf("%[^\n]",&s);
	while(s[l]!='\0')
	{
		if(s[l]==' ')
			count++;
		l++;

	}
	printf("There are %d words",count);

	getch();
}