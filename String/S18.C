#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	int i,j,k,p,l4,l1=0,l2=0,l3=0,count=0;
	char s1[100],s2[100],s3[100],s4[100];

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
	printf("Enter the string to insert at delete place\n");
	fflush(stdin);
	scanf("%[^\n]",s3);
	while(s3[l3]!='\0')
		l3++;
	for(i=0;i<l1;i++)
	{
		count=0;
	    //	s4[i]=s1[i];
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
			for(k=0;k<i;k++)
			{
				s4[k]=s1[k];
			}

			for(j=0;s3[j]!= '\0';j++,k++)
			{
				s4[k]=s3[j];
			}
			for(j=i+l2;s1[j]!='\0';j++,k++)
			{
				s4[k]=s1[j];
			}
			s4[k]='\0';
			printf("String :%s",s4);
			break;
		}
	}
			getch();
}

