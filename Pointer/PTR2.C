#include<stdio.h>
#include<conio.h>
void main()
{
	int *p,n=5;
	p=&n;
	clrscr();
	printf("Number by address, %u\n",&n);
	printf("Number by variable, %u\n",n);
	printf("Number by pointer, %u\n",*p);
	printf("Address, %u",p);

	getch();

}