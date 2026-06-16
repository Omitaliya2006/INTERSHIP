#include<stdio.h>
#include<conio.h>
void main()
{
	int number;

	clrscr();

	printf("Enter your numbeer as per day\n");
	scanf("%d",&number);

	switch(number)
	{
		case 1:
			printf("Monday");
			break;

		case 2:
			printf("Tuesday");
			break;

		case 3:
			printf("Wednesday");
			break;

		case 4:
			printf("Thursday");
			break;

		case 5:
			printf("Friday");
			break;

		case 6:
			printf("Saturday");
			break;

		case 7:
			printf("Sunday");
			break;

		default:
			printf("Invalid Number");
			break;

	}
		getch();
}