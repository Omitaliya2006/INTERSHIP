#include<iostream.h>
#include<conio.h>
class Testclass{
	private:
		int data;
	public:
		Testclass()
		{
			cout<< "I am constructor"<< endl;
		}
		int show(int data)
		{
			cout << data << endl;
			return data;
		}
};
void main()
{
	clrscr();
	Testclass t;
	t.show(12);
	getch();
}