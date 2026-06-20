#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int i,j,l1=0,l2=0,count=0;
	char s1[100],s2[100];

	clrscr();

	printf("Enter the string:\n");
	scanf("%[^\n]",s1);
	while(s1[l1]!='\0')
		l1++;
	printf("Enter the string which you have to find\n");
	fflush(stdin);
	scanf("%[^\n]",s2);
	while(s2[l2]!='\0')
		l2++;
	i=0;
	for(j=0;j<l2;j++)
	{
		while(i<l1)
		{

			if(s1[i]==s2[j])
			{
				count++;
				break;
			}
		i++;
		}
	}
	if(count==l2)
		printf("Word found at %d position",i-count+1);
	else
		printf("Word not found");

	getch();
}