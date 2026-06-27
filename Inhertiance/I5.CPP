#include<iostream.h>
#include<conio.h>
class Grand
{
	public:
		Grand()
		{
			cout << "I am Grand class"<< endl;
		}

};
class Parent : public Grand
{
	public:
		Parent()
		{
			cout << "I am Parent Class" << endl;
		}


};
class Child1 : public Parent
{
	public:
		Child1()
		{
			cout << "I am Child1 Class" << endl;
		}


};
class Child2 : public Parent
{
	public:
		Child2()
		{
			cout << "I am Child2 Class" << endl;
		}
};
class Grandson : public Child1,public Child2
{
	public:
		Grandson()
		{
			cout << "I am Grandson Class" << endl;
		}
};
void main()
{
	clrscr();
	Grandson obj;
	//obj.intialize();
	//obj.plus();
	//obj.plus();
	//obj.minus();
	//obj.show();
	getch();

}