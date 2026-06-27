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
		void set(int d);
		void show();
};
void Testclass :: set(int d)
{
	data=d;
}
void Testclass :: show()
{
	cout<< data << endl;
}
void main()
{
	clrscr();
	Testclass t1;
	t1.set(12);
	t1.show();
	getch();


}