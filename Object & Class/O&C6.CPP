#include<iostream.h>
#include<conio.h>
class Testclass{
	private:
		int data;
	public:
		Testclass()
		{
		       cout<<"I am constructor"<< endl;
		}
		~Testclass()
		{
			cout<<"I am Destructor"<< endl;
		}
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
	t.set(32);
	t.show();

	getch();
}