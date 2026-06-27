#include<iostream.h>
#include<conio.h>
class data
{
	private:
		int hrs;
		int min;
		int sec;
	public:
		data()
		{
			hrs=0;
			min=0;
			sec=0;
		}
		data(int value,int value1,int value2)
		{
		      hrs=value;
		      min=value1;
		      sec=value2;
		}
		void show()
		{
			cout << endl << "Hour: " << hrs << ", Minute: " << min << ", Second: " << sec << endl;
		}
		data operator +(data obj)
		{
			data temp;
			temp.hrs=obj.hrs+hrs;
			temp.min=obj.min+min;
			temp.sec=obj.sec+sec;
			if(temp.sec>60)
			{
				temp.min++;
				temp.sec=temp.sec-60;
			}
			if(temp.min>60)
			{
				temp.hrs++;
				temp.min=temp.min-60;
			}
			return temp;
		}

};
void main()
{
	clrscr();

	 data o(10,20,30),o1(15,30,45),o2;
	 o2=o+o1;
	 o2.show();

	 getch();
}