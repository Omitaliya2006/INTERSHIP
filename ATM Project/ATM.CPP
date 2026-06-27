#include<iostream.h>
#include<conio.h>
class ATM
{
	private:
		int n500,n200,n100,n50,n20,n10,n5,n2,n1;
	public:
		ATM()
		{
			n500=12;
			n200=10;
			n100=10;
			n50=10;
			n20=10;
			n10=10;
			n5=20;
			n2=25;
			n1=50;
		}
		int totalamount()
		{
			return ((500*n500)+(200*n200)+(100*n100)+(50*n50)+(20*n20)+(10*n10)+(5*n5)+(2*n2)+(1*n1));
		}
		int totalnote()
		{
			return (n500+n200+n100+n50+n20+n10+n5+n2+n1);
		}
		void deposit()
		{
			int d500,d200,d100,d50,d20,d10,d5,d2,d1;
			int amount,calculate,calculatenote,note;

			cout << endl << "Enter the amount" << endl;
			cin >> amount;
			cout << "Enter the total no of notes" << endl;
			cin >> note;

			cout << "No of 500 note:";
			cin >> d500;
			cout << "No of 200 note:";
			cin >> d200;
			cout << "No of 100 note:";
			cin >> d100;
			cout << "No of 50 note:";
			cin >> d50;
			cout << "No of 20 note:";
			cin >> d20;
			cout << "No of 10 note:";
			cin >> d10;
			cout << "No of 5 note:";
			cin >> d5;
			cout << "No of 2 note:";
			cin >> d2;
			cout << "No of 1 note:";
			cin >> d1;

			calculate=((500*d500)+(200*d200)+(100*d100)+(50*d50)+(20*d20)+(10*d10)+(5*d5)+(2*d2)+(1*d1));
			calculatenote=(d500+d200+d100+d50+d20+d10+d5+d2+d1);

			if(calculate!=amount || calculatenote!=note)
			{
				cout << "Invalid deposit"<< endl << endl;
				return;
			}
			else
			{
				n500=n500+d500;
				n200=n200+d200;
				n100=n100+d100;
				n50=n50+d50;
				n20=n20+d20;
				n10=n10+d10;
				n5=n5+d5;
				n2=n2+d2;
				n1=n1+d1;
				cout << "Successful" << endl << endl;
			}
		}
		void withdraw()
		{
			int amount,temp;

			cout << endl << "Enter the amount for withdraw" << endl;
			cin >> amount;

			temp = amount;

			if(amount <= 0)
			{
				cout << "Amount must be postive" << endl;
				return;
			}
			if(amount > totalamount())
			{
				cout << "Insufficent Balance in ATM"<< endl;
				return;
			}

			while(temp>=500 && n500>0)
			{
				temp = temp - 500;
				n500--;
			}

			while(temp>=200 && n200>0)
			{
				temp = temp - 200;
				n200--;
			}

			while(temp>=100 && n100>0)
			{
				temp = temp - 100;
				n100--;
			}

			while(temp>=50 && n50>0)
			{
				temp = temp - 50;
				n50--;
			}

			while(temp>=20 && n20>0)
			{
				temp = temp - 20;
				n20--;
			}

			while(temp>=10 && n10>0)
			{
				temp = temp - 10;
				n10--;
			}

			while(temp>=5 && n5>0)
			{
				temp = temp - 5;
				n5--;
			}

			while(temp>=2 && n2>0)
			{
				temp = temp - 2;
				n2--;
			}

			while(temp>=1 && n1>0)
			{
				temp = temp - 1;
				n1--;
			}
			cout << "Withdraw Successful"<< endl << endl;

		}
		void balance()
		{
			cout << endl << "Balance Check" << endl;

			cout << "Total amounts: " << totalamount() << endl;
			cout << "Total notes: " << totalnote() << endl;

			cout << "500: "  << n500 << endl;
			cout << "200: "  << n200 << endl;
			cout << "100: "  << n100 << endl;
			cout << "50: "  << n50 << endl;
			cout << "20: "  << n20 << endl;
			cout << "10: "  << n10 << endl;
			cout << "5: "  << n5 << endl;
			cout << "2: "  << n2 << endl;
			cout << "1: "  << n1 << endl << endl;
		}
};
void main()
{
	int choice;
	clrscr();

	ATM a;
	for(;choice!=4;)
	{
		cout << "1.Deposit money" << endl;
		cout << "2.Withdraw money" << endl;
		cout << "3.Balance money" << endl;
		cout << "4.Exit" << endl;

		cout << "Enter your choice" << endl;
		cin >> choice;

		switch(choice)
		{
			case 1:
				a.deposit();
				break;

			case 2:
				a.withdraw();
				break;

			case 3:
				a.balance();
				break;

			case 4:
				break;

			default:
				cout << "Invalid Choice" << endl;
		}

	}
	getch();
}