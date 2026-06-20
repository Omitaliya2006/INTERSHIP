#include<stdio.h>
#include<conio.h>
void main()
{
	int count(int n);
	int n;

	clrscr();

	printf("Enter the amount:\n");
	scanf("%d",&n);
	count(n);

	getch();
}
int count(int n)
{
	int a=0,b=0,c=0,d=0,e=0,f=0,o=0;
      //	printf("%d\n",n);
	for(;n!=0;)
	{
		if(n>=100)
		{
			a++;
			n=n-100;
		}
		else if(n>=50 && n<100)
		{
			b++;
			n=n-50;
		}
		else if(n>=20 && n<50)
		{
			c++;
			n=n-20;
		}
		else if(n>=10 && n<20)
		{
			d++;
			n=n-10;
		}
		else if(n>=5 && n<10)
		{
			e++;
			n=n-5;
		}
		else if(n>=2 && n<5)
		{
			f++;
			n=n-2;
		}
		else
		{
			o++;
			n=n-1;
		}
	}
	printf("%d time used 100\n",a);
	printf("%d time used 50\n",b);
	printf("%d time used 20\n",c);
	printf("%d time used 10\n",d);
	printf("%d time used 5\n",e);
	printf("%d time used 2\n",f);
	printf("%d time used 1\n",o);
	return 0;
}
