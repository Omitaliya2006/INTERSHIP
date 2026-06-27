#include<iostream.h>
#include<conio.h>
class Testclass{
	private:
		int data;
	public:
		Testclass(int n)
		{
			cout<< "I am constructor"<< endl;
			data=n;
		}
		void show()
		{
			int i,n1=0,n2=1,n3;
			cout << n2 << " ";
			for(i=1;i<data;i++)
			{
				n3=n2+n1;
				cout<< n3 << " ";
				n1=n2;
				n2=n3;
			}
		}

};
void main()
{
	int n;
	clrscr();
	cout << "Enter the number" << endl;
	cin >> n;
	Testclass t(n);

	t.show();
	getch();


}