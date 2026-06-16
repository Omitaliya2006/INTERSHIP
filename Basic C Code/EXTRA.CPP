#include<stdio.h>
#include<conio.h>
void main()
{
	int n,a[20],temp[20],size,left,right,mid,i,j,k;

	clrscr();

	printf("Enter the array size:\n");
	scanf("%d",&n);
	printf("Enter the number:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(size=1;size<n;size=size+2)
	{
		for(left=0;left<n-1;led)