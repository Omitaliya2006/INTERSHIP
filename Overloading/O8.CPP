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
			cout << d << endl;;
		}
		data operator +(data obj)
		{
			data temp;
			temp.d=obj.d+d;
			return temp;
		}
		data operator -(data obj)
		{
			data temp1;
			temp1.d=obj.d-d;
			return temp1;
		}
		data operator *(data obj)
		{
			data temp1;
			temp1.d=obj.d*d;
			return temp1;
		}
		data operator /(data obj)
		{
			data temp1;
			temp1.d=obj.d/d;
			return temp1;
		}


};
void main()
{
	clrscr();

	 data o(5),o1(10),o2;
	 o2=o+o1;
	 o2.show();
	 o2=o-o1;
	 o2.show();
	 o2=o*o1;
	 o2.show();
	 o2=o/o1;
	 o2.show();


	 getch();
}