#include<iostream.h>
#include<conio.h>
class operat
{
	private:
		int d;
	public:
		void data(int value)
		{
		      d=value;
		}
		void display()
		{
		 cout << d;
		}
		int operator ++()
		{
			d++;
		      //	cout<< d;
			return d;
		}

};
void main()
{
	clrscr();

	 operat o;
	 o.data(3);
	 o++;
	 o.display();

	 getch();
}