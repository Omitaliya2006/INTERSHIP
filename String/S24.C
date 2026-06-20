#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int i,j,k,l1=0;
	char s1[100];

	clrscr();

	printf("Enter the string:\n");
	scanf("%[^\n]",s1);
	while(s1[l1]!='\0')
		l1++;

	for(i=0;i<=l1;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c",s1[j-1]);
		}

		for(k=i;k<l1;k++)
			printf("  ");

		for(j=i;j>=1;j--)
		{
			printf("%c",s1[j-1]);
		}
	      printf("\n");
	}
	getch();
}

      /*	for(i=1;i<=5;i++)
	{
		for(k=i;k<=5;k++)
			printf(" ");
		for(j=i;j>=1;j--)
			printf("%d",j);
		printf("\n");
	}
	*/