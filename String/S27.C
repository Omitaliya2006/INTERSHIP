#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int i,j,k,a=0,l=0,temp=0,l2;
	char s1[100];
	clrscr();

	printf("Enter the string:\n");
	scanf("%[^\n]",&s1);
	while(s1[l]!='\0')
		l++;
	for(i=0;i<l;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%c",s1[a]);
			a++;
			if(a==l)
				a=0;
		}
		for(k=0;k<2*(l-i-1);k++)
		{
			printf(" ");
		}
		for(j=0;j<=i;j++)
		{
			printf("%c",s1[a]);
			a++;
			if(a==l)
				a=0;
		}
	       printf("\n");
	}
	a=0;
	for(i=l-1;i>0;i--)
	{
		for(j=i-1;j>=0;j--)
		{
			printf("%c",s1[a]);
			a++;
			if(a==l)
				a=0;
		}
		for(k=0;k<=2*(l-i)-1;k++)
		{
			printf(" ");
		}
			for(j=i-1;j>=0;j--)
		{
			printf("%c",s1[a]);
			a++;
			if(a==l)
				a=0;
		}
		printf("\n");
	}
	getch();
}