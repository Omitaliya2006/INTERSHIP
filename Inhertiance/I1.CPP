#include<iostream.h>
#include<conio.h>
class Base
{
	protected:
		int x;
	public:
		void plus()
		{
			x++;
		}
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
		void minus()
		{
			x--;
		}

};
void main()
{
	clrscr();
	Derv obj;
	obj.plus();
	obj.plus();
	obj.minus();
	obj.show();
	getch();

}