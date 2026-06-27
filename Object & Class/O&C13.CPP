#include<iostream.h>
#include<conio.h>
class point
{
	private:
		int x,y;
	public:
		void assign()
		{
			cout << "Enter the age\nx:";
			cin >> x;
			cout << "y:";
			cin >> y;
		}
		void add()
		{
			cout << "Adding x & y : " << x+y << endl;
		}

};
void main()
{
	clrscr();
	point p;
	p.assign();
	p.add();
	getch();
}