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
		void show(int data)
		{
			cout << data << endl;
		}
};
void main()
{
	clrscr();
	Testclass t;
      t.show(12);
	getch();


}