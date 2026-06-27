#include<iostream.h>
#include<conio.h>
class Testclass{
	private:
		int data;
	public:
		Testclass()
		{
			cout<<"I am without arguement construvctor" <<endl;
		}
		Testclass(int d)
		{
		       cout<< "I am argument constructor"<< endl;
		       data=d;
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
	Testclass t1,t2(82);
	t1.set(48);
	t1.show();
	t2.show();
	getch();


}