#include<stdio.h>
#include<conio.h>
#include<string.h>
struct student
	{
		int rollno;
		char name[20];
	};
void main()
{
	struct student s[10];
	int i,n;
	clrscr();

	printf("Enter the no of student");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Student:");
		scanf("%d %s",s[i].rollno,s[i].name);
	}
	getch();
}
