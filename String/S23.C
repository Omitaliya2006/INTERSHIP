#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int i,j,l1=0;
	char s1[100],s2[100],temp;

	clrscr();

	printf("Enter the string\n");
	scanf("%[^\n]",s1);
	while(s1[l1]!='\0')
		l1++;

	for(i=0;i<l1;i++)
	{
		for(j=i+1;j<l1;j++)
		{
			if(s1[i]>=65 && s1[i]<=91)
			{
				temp=s1[i];
				s1[i]=s1[j];
				s1[j]=temp;

			}
		}
	}
	s1[l1]='\0';
	printf("%s",s1);
	getch();
}