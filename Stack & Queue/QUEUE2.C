#include<stdio.h>
#include<conio.h>
void main()
{
	int s[100],n,i;
	int front,rear;
	int choice,p;

	clrscr();

	printf("Enter the queue size:\n");
	scanf("%d",&n);

	front=-1;
	rear=-1;

	while(1)
	{
		printf("\nQueue Menu\n");
		printf("1.Insert\n");
		printf("2.Delete\n");
		printf("3.Display\n");
		printf("4.Exit\n");

		printf("Enter the Choice\n");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1:
				if((front+1)%n==rear)
					printf("Queue is full\n");
				else
				{
					printf("Enter the value\n");
					scanf("%d",&p);

					if(rear == -1)
						rear = 0;

					front = (front+1)%n;
					s[front]=p;


					printf("%d is inserted\n",p);
				}
				break;

			case 2:
				if(rear == -1)
					printf("Queue is empty\n");
				else
				{
					printf("%d is deleted\n",s[rear]);

					if(front == rear)
						front = rear = -1;
					else
					rear = (rear+1)%n;
				}
				break;

			case 3:
				if((front+1)%n==front)
					printf("Queue is full\n");
				else if(rear == -1)
					printf("Queue is empty\n");
				else
				{

					if(rear>front)
					{
						for(i=rear;i<n;i++)
							printf("%d ",s[i]);
						for(i=0;i<=front;i++)
							printf("%d ",s[i]);
					}
					else
					{
						for(i=rear;i<=front;i++)
							printf("%d ",s[i]);
					}
				}
				break;

			case 4:
				return 0;

			default:
				printf("Invalid Number\n");
		}
	}
	getch();
}