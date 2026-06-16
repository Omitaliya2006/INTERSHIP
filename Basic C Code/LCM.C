#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,l;

	clrscr();

	scanf("%d%d",&a,&b);
	if(a>b)
		l=a;
	else
		l=b;
	while(!(l%a==0 && l%b==0))
		l++;
	printf("LCM=%d",l);

	getch();
}