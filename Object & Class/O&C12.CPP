#include<iostream.h>
#include<conio.h>
#include<string.h>
class avg
{
	private:
		int n,ag;
	public:
		avg()
		{
			cout << "Enter the total number:" << endl;
			cin >>  n;
		}
		void assign()
		{
			int i,s[10];
			ag=0;
			cout << "Enter the number" << endl;
			for(i=0;i<n;i++)
			{
				cin >> s[i];
				ag=ag+s[i];
			}
		}
		void show()
		{
			ag=ag/n;
			cout << "Avg value of number:" << ag;
		}
};
void main()
{
	clrscr();
	avg a;
	a.assign();
	a.show();

	getch();
}