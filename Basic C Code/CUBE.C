#include<stdio.h>
#include<conio.h>
void main()
{
int l,b,h;
int area;
clrscr();
printf("Enter the value of Length, Breadth & Height\nL:");
scanf("%d",&l);
printf("B:");
scanf("%d",&b);
printf("H:");
scanf("%d",&h);
area=l*b*h;
printf("Area of Cube=%d",area);
getch();
}
