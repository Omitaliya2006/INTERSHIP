#include<stdio.h>
#include<conio.h>
void main()
{
	int n,a[20],temp[20],i,j,k,size,left,right,mid;

	clrscr();

	printf("Enter the array size:\n");
	scanf("%d",&n);
	printf("Enter the number:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(size=1;size<=n;size=size+2)
	{
		for(left=0;left<n-1;left=left+(2*size))
		{
			mid=left+size-1;
			right=left+2*size-1;

			if(right>=n)
				right=n-1;

			i=left;
			j=mid+1;
			k=left;

			while(i<=mid && j<=right)
			{
				if(a[i] < a[j])
				{
					temp[k]=a[i];
					i++;
				}
				else
				{
					temp[k]=a[j];
					j++;
				}
				k++;
			}
			while(i<=mid)
			{
				temp[k]=a[i];
				i++;
				k++;
			}
			while(j<=right)
			{
				temp[k]=a[j];
				j++;
				k++;
			}
			for(i=left;i<=right;i++)
			{
				a[i]=temp[i];
			}
		}
	}
	printf("Sorted Array:\n");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);

	getch();
}