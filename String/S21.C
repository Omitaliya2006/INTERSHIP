#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int i,l1=0,l2=0,count;
	char s1[100],s2[100];

	clrscr();

	printf("Enter the stirng1:\n");
	scanf("%[^\n]",s1);
	while(s1[l1]!='\0')
		l1++;
	printf("Enter the string2:\n");
	fflush(stdin);
	scanf("%[^\n]",s2);
	while(s2[l2]!='\0')
		l2++;
	if(l1!=l2)
		printf("Not equal");
	else
	{

		 for(i=0;i<l1;i++)
		 {
			count=0;
			if((s1[i])!=(s2[i]) || (s1[i]+32)!=(s2[i]) || (s1[i])!=(s2[2]+32) || (s1[1]+32)!=(s2[i]+32))
			{
			       count=1;
			       break;
			}
		 }
	}
	if(count==1)
		printf("Not Equal");
	else
		printf("Equal");
	getch();
}