#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],n,i,f=0,s=0;

	clrscr();

	printf("Enter the array size\n");
	scanf("%d",&n);

	printf("Enter the number\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		if(a[i]>f)
		{
			s=f;
			f=a[i];
		}
		else
		{
			if(a[i]>s && a[i]!=f)
				s=a[i];
		}
	}


	printf("Second highest number: %d",s);
	getch();


}
