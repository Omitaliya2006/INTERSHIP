#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int l=0,i,j;
	char s1[100],s2[100];
	int count=0;

	clrscr();

	printf("Enter the string:\n");
	scanf("%[^\n]",&s1);

	while(s1[l]!='\0')
	{
		l++;
	}

	j=0;
	for(i=0;i<=l-1;i++)
	{
		if(j<=l-1 )
		{
			s2[j]=s1[i];
			j++;
		}
	}
	s2[l]='\0';

	j=l-1;
	 for(i=0;i<l/2;i++)
	 {
		if(j>=0)
		{
			if(s2[j]==s1[i])
			{
				count=0;
				j--;
			}
			else
			{
				count=1;
				break;
			}
		}
	 }
	 if(count==0)
		printf("Palindrome");
	 else
		printf("Not Palindrome");

	getch();
}