#include<iostream.h>
#include<conio.h>
#include<string.h>
class upper
{
	private:
		char s1[100],s2[100];
		int l;
	public:
		void assign()
		{
			cout << "Enter the String: ";
			cin >> s1[100];
			while(s1[l]!='\0')
			{
				l++;
			}
			int i;
			for(i=0;i<l;i++)
			{
				if(s1[i]>=97  && s1[i]<=123)
					s2[i]=s1[i]-32;
			}
			s2[l]='\0';
			for(i=0;i<l;i++)
				cout << s2[i];
		}
};
void main()
{
	clrscr();
	upper u;
	u.assign();
	getch();
}