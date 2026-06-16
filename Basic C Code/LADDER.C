#include<stdio.h>
#include<conio.h>
void main()
{
	int mark;

	clrscr();

	printf("Enter the mark\n");
	scanf("%d",&mark);

	if(mark<=100 && mark>=90)
		printf("Student got Excellent");
	else if(mark<90 && mark>=80)
		printf("Student got Very Good");
	else if(mark<80 && mark>=70)
		printf("Student got Good");
	else if(mark<70 && mark>=60)
		printf("Student got Avg");
	else if(mark<60 && mark>=50)
		printf("Student need to improve");
	else if(mark<50 && mark>=40)
		printf("Student is pass");
	else
		printf("Student is Fail");

	getch();

}