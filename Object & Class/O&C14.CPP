#include<iostream.h>
#include<conio.h>
class series
{
	private:
	int n,p;
	public:
		void assign()
		{
			cout << "Enter the number \n n:";
			cin >> n;
			cout << "Enter the power \n p:";
			cin >> p;
		}
		void add()
		{
			int i,j;
			float temp1,temp=1,sum=0,temp2;
			for(i=1;i<=p;i++)
			{

				temp=temp*n;
			      //	cout << temp << endl;
				temp1=1;
				for(j=1;j<=i;j++)
					temp1=temp1*j;
				temp2=temp/temp1;

			       //	cout << temp2 << endl << temp1 << endl << temp << endl;
				sum=sum+temp2;
			}
			cout << "Sum of Series: " << sum << endl;
		}
};
void main()
{
	clrscr();

	series s;
	s.assign();
	s.add();
	getch();
}
