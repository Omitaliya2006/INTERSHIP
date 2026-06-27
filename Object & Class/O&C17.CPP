#include<iostream.h>
#include<conio.h>
class cricketer
{
	private:
		char name[20];
		int age;
		char country[20];
		char type[20];
		int playes;
	public:
		void assign()
		{
			name[20] = '\0';
			age = 0;
			country[20] = '\0';
			type[20] = '\0';
			playes = 0;
		}
		void data()
		{
			cout << "Enter name: "; cin >> name;
			cout << "Enter age: "; cin >> age;
			cout << "Enter country: "; cin >> country;
			cout << "Enter type of Cricketer: "; cin >> type;
			cout << "Enter total no of matched played: "; cin >> playes;
			cout <<  endl << endl;
		}
		void display()
		{
			cout << "Name: " << name << endl;
			cout << "Age: " << age << endl;
			cout << "Country: " << country << endl;
			cout << "Type of Cricketer" << type << endl;
			cout << "Total no of matched played" << playes << endl << endl;
		}
};
void main()
{
	int i,n;
	clrscr();
	cout << "Enter the total no of cricketer: ";
	cin >> n;
	cricketer c;
	for(i=1;i<=n;i++)
	{
	c.assign();
	c.data();
	c.display();
	}
	getch();
}