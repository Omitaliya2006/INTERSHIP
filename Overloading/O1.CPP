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
		void operator ++()
		{
			d++;
			cout<< d << endl;;
		}

};
void main()
{
	clrscr();

	 operat o;
	 o.data(3);
	 o++;
	 ++o;
	 getch();
}