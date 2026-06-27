#include<iostream.h>
#include<conio.h>
class data
{
	private:
		int d;
	public:
		data()
		{
			d=0;
		}
		data(int value)
		{

		      d=value;
		}
		void show()
		{
			cout << d;
		}
		data operator +=(data obj)
		{
			d+=obj.d;
			return d;
		}

};
void main()
{
	clrscr();

	 data o(3),o1(5),o2;
	 o+=o1;
	 o.show();

	 getch();
}