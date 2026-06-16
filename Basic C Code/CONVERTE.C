
#include<stdio.h>
#include<conio.h>
void main()
{
	float f,c;
	int operation;

	clrscr();

	printf("Enter the value 1 or 2\n");
	printf("Enter 1 to convert Celsius to Fahrenheit\n");
	printf("Enter 2 to convert Fahrenheit to Celsius\n");
	scanf("%d",&operation);
	switch(operation)
	{
		case 1:
			printf("Enter the value of Celsius=");
			scanf("%f",&c);
			f=(1.8*c)+32;
			printf("Value of Fahrenheit=%f",f);
			break;

		case 2:
			printf("Enter the value of Fahrenheit=");
			scanf("%f",&f);
			c=((f-32)/(9/5));
			printf("Value of Celsius=%f",c);
			break;

		default:
			printf("Invalid value enter only 1 or 2");
			break;
	}

	getch();
}