#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int l=0,i,count=0;
	char s[100];

	clrscr();

	printf("Enter the string:\n");
	scanf("%[^\n]",&s);
	while(s[l]!='\0')
	{
		if(s[l]=='a' || s[l]=='e' || s[l]=='i' || s[l]=='o' || s[l]=='u'|| s[l]=='A' || s[l]=='E' || s[l]=='I' || s[l]=='O' || s[l]=='U')
			count++;
		l++;

	}
	printf("There are %d vowels in sentence",count);

	getch();
}