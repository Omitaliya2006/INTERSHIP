#include<stdio.h>
#include<conio.h>
void main()
{
	int *p,i,n;

	clrscr();

	printf("Enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		scanf("%u",(p+i));

	for(i=1;i<=n;i++)
		printf("%u  ",*(p+i));
	getch();

}