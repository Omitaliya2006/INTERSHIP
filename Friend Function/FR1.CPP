#include<iostream.h>
#include<conio.h>
class B;
class A
{
	private:
		int x;
	public:
		A()
		{
			cout << "x: ";
			cin >> x;
		}
		friend void frifun(A,B);
};
class B
{
	private:
		int y;
	public:
		B()
		{
			cout << "y: ";
			cin >> y;
		}
		friend void frifun(A,B);
};
void frifun(A obj,B obj1)
{
   cout << "x+y= " << (obj.x + obj1.y) << endl;
};

void main()
{
	clrscr();
	A obj;
	B obj1;
	frifun(obj,obj1);
	getch();

}