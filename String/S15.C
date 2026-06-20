#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int i,j,l3,p,l1=0,l2=0;
	char s1[100],s2[100];
	char s3[100];

	clrscr();

	printf("Enter the string1:\n");
	scanf("%[^\n]",&s1);
	while(s1[l1]!='\0')
		l1++;
     //	printf("%d\n",l1);
	printf("Enter the string which you have insert:\n");
	fflush(stdin);
	scanf("%[^\n]",&s2);
	while(s2[l2]!='\0')
		l2++;
	l3=l1+l2;
      //	printf("%d\n",l2);
	printf("Enter the position");
	scanf("%d",&p);
	for(i=0;i<p;i++)
	{
		s3[i]=s1[i];
	}
	for(i=p,j=0;j<l2;i++,j++)
	{
		s3[i]=s2[j];
	}
	for(i=l2+p,j=p;i<l3;i++,j++)
	{
		s3[i]=s1[j];
	}

	s3[l3]='\0';

	printf("Inserting string: %s",s3);
	getch();
}