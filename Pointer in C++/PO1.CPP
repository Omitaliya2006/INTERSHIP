#include<iostream.h>
#include<conio.h>
class pointer
{
	private:
		int a;
		int b;
	public:
		pointer()
		{
			cout << "Enter the value: ";
			cin >> a >> b;
		}
		void address()
		{
			cout << "Address of A, " << &a << endl;;
			cout << "Address of B, " << &b;
		}
};
void main()
{
	clrscr();
	pointer p;
	p.address();
	getch();
}