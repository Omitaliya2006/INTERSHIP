#include<iostream.h>
#include<conio.h>
void main()
{
	int s[20],i,j,n,temp;

	clrscr();

	cout << "Enter the array size" << endl;
	cin >> n;
	cout << "Enter the number" << endl;
	for(i=0;i<n;i++)
		cin >> s[i];

	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(s[i]>s[j])
			{
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
		}
	}
	cout << "Sorted Array" << endl;
	for(i=0;i<n;i++)
		cout << s[i] << " ";
	getch();

}