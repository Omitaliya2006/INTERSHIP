#include<stdio.h>
#include<conio.h>
void main()
{
int l,b;
float area;
clrscr();
printf("Enter value of Length and Breadth\nL:");
scanf("%d",&l);
printf("B:");
scanf("%d",&b);
area=0.5*l*b;
printf("Area of Triangle=%f",area);
getch();
}
