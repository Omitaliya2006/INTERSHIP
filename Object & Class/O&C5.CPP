#include<iostream.h>
#include<conio.h>
class Testclass{
	private:
		int data;
	public:
		Testclass(int d)
		{
		       cout<< "I am constructor"<< endl;
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
	Testclass t1(12);
	t1.show();
	getch();


}