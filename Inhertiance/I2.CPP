#include<iostream.h>
#include<conio.h>
class Person
{
	protected:
		char name[20];
		int age;
	public:
		Person()
		{
			cout << "Enter Name: ";
			cin >> name;
			cout << "Enter Age: ";
			cin >> age;
		}
		void display()
		{
			cout << "Name: " << name << endl;
			cout << "Age: " << age << endl;
		}
};
class Student : public Person
{
	private:
		float perc;
	public:
		Student()
		{
		       cout << "Enter the pertcentage: ";
		       cin >> perc;
		}
		void display()
		{
			Person :: display();
			cout << "Percentage: " << perc << endl;
		}
};
class Teacher : public Person
{
	private:
		int salary;
	public:
		Teacher()
		{
		       cout << "Enter the Salary: ";
		       cin >> salary;
		}
		void display()
		{
			Person :: display();
			cout << "Salary: " << salary << endl;
		}
};

void main()
{
	clrscr();
	Student obj1;
	obj1.display();
	Teacher obj2;
	obj2.display();
	getch();

}