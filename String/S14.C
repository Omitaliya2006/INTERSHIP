#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int i,j,l3,l1=0,l2=0;
	char s1[100],s2[100];
	char s3[100];

	clrscr();

	printf("Enter the string1:\n");
	scanf("%[^\n]",s1);
	while(s1[l1]!='\0')
		l1++;
       //	printf("%d\n",l1);
	printf("Enter the string2:\n");
	fflush(stdin);
	scanf("%[^\n]",s2);

	while(s2[l2]!='\0')
		l2++;
       //	printf("%d\n",l2);
	l3=l1+l2;
       //	printf("%d\n",l3);
	for(i=0;i<l1;i++)
	{
			s3[i]=s1[i];

	}
	for(i=0;i<l2;i++)
	{
		s3[l1+i]=s2[i];
	}
	s3[l3]='\0';

	printf("Append trim : %s",s3);
	getch();
}