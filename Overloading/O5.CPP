#include<iostream.h>
#include<conio.h>
#include<string.h>
class data
{
	private:
		char d[20];
	public:
		data()
		{
			d[20]='\0';
		}
		data(char value[20])
		{
		     *d=*value;
		}
		void show()
		{
			cout << d;
		}
		data operator +(data obj)
		{
			data temp;
			*temp.d=*obj.d+*d;
			return temp;
		}
};
void main()
{
	clrscr();

	 data o("Its me"),o1(" Its you"),o2;
	 o2=o+o1;
	 o2.show();

	 getch();
}