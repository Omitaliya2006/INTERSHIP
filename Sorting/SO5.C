#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,a[100];
	int pivot,s[100],t=-1;
	int first,last,f,l,temp;

	clrscr();

	printf("Enter the array size:\n");
	scanf("%d",&n);
	printf("Enter the number:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	t++;
	s[t]=0;
	t++;
	s[t]=n-1;

	while(t>=0)
	{
		first=s[t];
		t--;
		last=s[t];
		t--;

		pivot=a[first];

		f=first-1;
		l=last;

		while(l<=f)
		{
			while(a[l]<pivot)
			{
				l++;
			}
			while(f>=last && a[f]>pivot)
			{
				f--;
			}
			if(l<f)
			{
				temp=a[l];
				a[l]=a[f];
				a[f]=temp;
				l++;
				f--;
			}
		}
		temp=a[l];
		a[l]=a[first];
		a[first]=temp;

		pivot=l;

		if(last<pivot-1)
		{
			t++;
			s[t]=last;
			t++;
			s[t]=pivot-1;
		}
		if(pivot+1<first)
		{
			t++;
			s[t]=pivot+1;
			t++;
			s[t]=first;
		}
	}
	printf("Sorted Array:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}

	getch();
}