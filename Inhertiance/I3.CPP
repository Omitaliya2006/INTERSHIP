#include<iostream.h>
#include<conio.h>
class Cricketer
{
	protected:
		int totalmatch;
	public:
		Cricketer()
		{
			cout << "Enter the total no of match: ";
			cin >> totalmatch;
		}
};
class Batsman : public Cricketer
{
	private:
		int totalrun;
		float avgrun;
		int bestperf;
	public:
		Batsman()
		{
			cout << "Enter the total runs: ";
			cin >> totalrun;
			cout << "Enter the best Performance: ";
			cin >> bestperf;
		}
		void calculate()
		{
			avgrun = totalrun / totalmatch;
		}
		void display()
		{
			cout << "Total Run: " << totalrun << endl;
			cout << "Avg Run: " << avgrun << endl;
			cout << "Best Performance: "  << bestperf << endl;
		}

};
void main()
{
	clrscr();
	Batsman b;
	b.calculate();
	b.display();
	getch();

}