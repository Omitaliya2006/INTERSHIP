#include<iostream.h>
#include<conio.h>
class data
{
	private:
		int n;
	public:
		data()
		{
			n=0;
		}
		data(int value)
		{

		      n=value;
		}

		data operator >(data obj)
		{
			if(n > obj.n)
				return 1;
			else
				return 0;
		}
		data operator ==(data obj)
		{
			if(n == obj.n)
				return 1;
			else
				return 0;
		}
};
void main()
{
	clrscr();

	data d(12),d1(24);

	if(d==d1)
		cout << "Equal" << endl;
	else if(d>d1)
		cout << "Greater than" << endl;
	else
		cout << "Smaller" << endl;


	getch();
}