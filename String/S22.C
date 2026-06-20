#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int i,j,l1=0,count;
	char s1[100];

	clrscr();

	printf("Enter the string:\n");
	scanf("%[^\n]",s1);
	while(s1[l1]!='\0')
		l1++;

	for(i=0;i<l1;i++)
	{
		count=0;
		for(j=0;j<l1;j++)
		{
			if(s1[i]==s1[j])
			{
				count++;
			}
		}
		printf("%c have frequency %d time in word\n",s1[i],count);
	}
	getch();

}