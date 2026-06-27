#include<iostream.h>
#include<conio.h>
class time
{
	private:
		int hrs,hrs1,hrs2;
		int min,min1,min2;
		int sec,sec1,sec2;
	public:
		void assign()
		{
			cout << "Enter the hour: "; cin >> hrs1;
			cout << "Enter the Min: "; cin >> min1;
			cout << "Enter the sec: "; cin >> sec1;
			cout << "Enter the hour: "; cin >> hrs2;
			cout << "Enter the Min: "; cin >> min2;
			cout << "Enter the sec: "; cin >> sec2;

		}
		void add()
		{
			hrs=hrs1+hrs2;
			min=min1+min2;
			sec=sec1+sec2;
			if(sec>=60)
			{
				min++;
				sec = sec - 60;
			}
			if(min>=60)
			{
				hrs++;
				min = min - 60;
			}
		}
		void display()
		{
			cout << endl << "Hour: " << hrs << ", Minute: " << min << ", Second: " << sec << endl;
		}
};

void main()
{
	clrscr();
	time t;
	t.assign();
	t.add();
	t.display();
	getch();
}