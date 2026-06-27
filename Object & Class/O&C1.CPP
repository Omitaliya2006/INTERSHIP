#include<iostream.h>
#include<conio.h>
class Testclass{
	private:
		int data;
	public:
		void set(int d)
		{
			data=d;
		}
		void show()
		{
			cout << data << endl;
		}
};
void main()
{
	clrscr();
	Testclass t;
	t.set(12);
	t.show();
	getch();


}