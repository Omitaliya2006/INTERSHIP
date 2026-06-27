#include<iostream.h>
#include<conio.h>
//class B;
 class A
{
	private:
		int x;
	public:
		A()
		{
			cout << "x: ";
			cin >> x;
		}
		friend int frifun(A);
};
/*class B
{
	private:
		int y;
	public:
	      void ret()
		{
			cout << "y: " << y;
		}
		friend int frifun(A,B);
};              */
int frifun(A obj)
{
   cout << "x*x= " << (obj.x * obj.x) << endl;
   //obj1.y=(obj.x * obj.x);
   //return obj1.y;


};

void main()
{
	clrscr();
	A obj;
       //	B obj1;
	frifun(obj);


	getch();

}