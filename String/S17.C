#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int i,j,k,l1=0,l2=0,count=0;
	char s1[100],s2[100],s3[100];

	clrscr();

	printf("Enter the string:\n");
	scanf("%[^\n]",s1);
	while(s1[l1]!='\0')
		l1++;
	printf("Enter the string which you have to delete\n");
	fflush(stdin);
	scanf("%[^\n]",s2);
	while(s2[l2]!='\0')
		l2++;
	for(i=0;i<l1;i++)
	{
		count=0;
		s3[i]=s1[i];
		for(j=0;j<l2;j++)
		{
			if(s1[i+j]!=s2[j])
			{
				count=1;
				break;
			}
		}
		if(count==0)
		{
			printf("String Found\n");
			for(k=i-1,j=i+l2;j<=l1;j++,k++)
			{
				s3[k]=s1[j];
			}
		printf("String: %s\n",s3);
		break;
		}

	}
	if(count==1)
		printf("String not found");
	getch();
}
