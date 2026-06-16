#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,l;

	clrscr();

	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
			l=a;
		else
			l=c;
	}
	else
	{
		if(b>c)
			l=b;
		else
			l=c;
	}
	while(!(l%a==0 && l%b==0 && l%c==0))
		l++;
	printf("LCM=%d",l);

	getch();
}