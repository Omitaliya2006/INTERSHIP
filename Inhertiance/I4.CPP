#include<iostream.h>
#include<conio.h>
class Base
{
	protected:
		int x;
	public:
		void show()
		{
			cout << x << endl;
		}
};
class Derv : public Base
{
	public:
		Derv()
		{
			x=0;
		}
};
class Dfd : public Derv
{
	public:
		void plus()
		{
			x++;
		}
		void minus()
		{
			x--;
		}


};
void main()
{
	clrscr();
	Dfd obj;
	obj.plus();
	obj.plus();
	obj.minus();
	obj.show();
	getch();

}