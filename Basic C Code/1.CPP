#include<iostream.h>
#include<conio.h>
class Testclass{
	private:
		int data;
		char s[10];
		int l;
	public:
		Testclass()
		{
			cout << "Enter the Array size: ";
			cin >> l;
			cout << "1 for Insert" << endl;
			cout << "2 for Delete" << endl;
			cout << "3 for Display" << endl;
			cout << "4 for Exit" << endl;
		}
		void show()
		{
			int i,j;
			for(i=0;i<l;i++)
			{
				cout << "Enter the Number:";
				cin >> data;
				switch(data)
				{
					case 1:
					       push(s[i]);
						break;

					case 2:
					       delete(s[i]);
						break;

					case 3:
					       for(j=0;j<i;j++)
							cout << s[i] << endl;
						break;

					case 4:
						return 0;

					default:
						cout << "Enter the number between 1 to 4" << endl;

				}
			}
		}
};
void main()
{
	clrscr();
	Testclass t;
      //	t.set(12);
	t.show();
	getch();


}