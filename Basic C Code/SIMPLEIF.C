#include<stdio.h>
#include<conio.h>
void main()
{
	int mark;

	clrscr();

	printf("Enter the Marks:");
	scanf("%d",&mark);
	if(mark>=35)
		printf("Student is pass");

	getch();
}