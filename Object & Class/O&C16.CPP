#include<iostream.h>
#include<conio.h>
class student
{
	private:
		int rollno;
		char name[20];
		int m1,m2,m3;
		float i;
	public:
		void input()
		{
			cout << "Enter the name:";
			cin >> name;
			cout << "Enter the roll no:";
			cin >> rollno;
			cout << "Enter the marks:";
			cin >> m1 >> m2 >> m3;
		}
		void pertcentage()
		{
			i=(m1+m2+m3)/3;
		  //     cout<< "Pertcentage = " << i << endl;
		}
		void display()
		{
			cout << "Name " << name << endl;
			cout << "Roll No " << rollno << endl;
			cout << "Pertecentage " << i << "%"<< endl;
		}
};
void main()
{
	clrscr();
	student s1,s2;
	s1.input();
	s1.pertcentage();
	s1.display();
	s2.input();
	s2.pertcentage();
	s2.display();
	getch();
}
