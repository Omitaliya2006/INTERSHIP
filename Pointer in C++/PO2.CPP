#include<iostream.h>
#include<conio.h>
class pointer
{
	private:
		int a;
		int b;
		int *p;
		int *p1;
	public:
		pointer()
		{
			cout << "Enter the value: ";
			cin >> a >> b;
			p=&a;
			p1=&b;
		}
		void address()
		{
			cout << "Address of A, " << &a << endl;
			cout << "Address of B, " << &b << endl;
			(*p)++;
			(*p1)++;
			cout << "Value of a: " << *p << endl;
			cout << "Value of b: " << *p1 << endl;
		}
};
void main()
{
	clrscr();
	pointer p;
	p.address();
	getch();
}