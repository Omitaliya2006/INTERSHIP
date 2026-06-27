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
	Testclass t1,t2;
	t1.set(2);
	t2.set(34);
	t1.show();
	t2.show();
	getch();


}
