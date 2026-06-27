#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],left[100],right[100],n,i,p,count,root,s;
	int c[100],t=-1;

	clrscr();

	printf("Enter the Array size:\n");
	scanf("%d",&n);

	for(i=0;i<=n;i++)
	{
		left[i]=-1;
		right[i]=-1;
	}

	count=0;
	root=-1;

	for(i=0;i<n;i++)
	{
		printf("Enter the value:\n");
		scanf("%d",&p);

		a[count] = p;
		left[count]=-1;
		right[count]=-1;

		if(root == -1)
			root = count;
		else
		{
			s = root;
			while(1)
			{
				if(p < a[s])
				{
					if(left[s] == -1)
					{
						left[s] = count;
						break;
					}
					else
					{
						s = left[s];
					}
				}
				else
				{
					if(right[s] == -1)
					{
						right[s] = count;
						break;
					}
					else
					{
						s = right[s];
					}
				}
			}
		}
	count++;
	}
	s=root;
	printf("BST order\n");
	while(s != -1 || t != -1)
	{
		while(s!=-1)
		{
			c[++t] = s;
			s = left[s];
		}
		s = c[t--];

		printf("%d  ",a[s]);

		s = right[s];
	}

	getch();
}