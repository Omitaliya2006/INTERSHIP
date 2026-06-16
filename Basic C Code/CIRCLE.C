#include<stdio.h>
#include<conio.h>
#define PI 3.14
void main()
{
	int r;
	float area;

	clrscr();

	printf("Enter the raduis of circle\nR:");
	scanf("%d",&r);
	area=PI*r*r;
	printf("Area of Cricle=%f",area);

	getch();
}
