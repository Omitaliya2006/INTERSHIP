#include<stdio.h>
#include<conio.h>
void main()
{
	int s[100],n;
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
		printf("1.Insert Front\t5.Fornt\n");
		printf("2.Insert Rear\t6.Rear\n");
		printf("3.Delete Front\t7.Isempty\n");
		printf("4.Delete Rear\t8.IsFull\n");
	       /*	printf("5.Fornt\n");
		printf("6.Rear\n");
		printf("7.Isempty\n");
		printf("8.IsFull\n"); */
		printf("\t   9.Exit\n");

		printf("Enter the Choice:\n");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1:
				if((front == 0 && rear == n-1) || front == rear+1)
					printf("Queue is full\n");
				else
				{
					printf("Enter the value:\n");
					scanf("%d",&p);

					if(front == -1)
						front = rear = 0;
					else if(front == 0)
						front = n-1;
					else
						front--;
					s[front]=p;
					printf("%d is inserted at front\n",p);
				}
				break;

			case 2:
				if((front == 0 && rear == n-1) || front == rear+1)
					printf("Queue is full\n");
				else
				{
					printf("Enter the value:\n");
					scanf("%d",&p);

					if(front == -1)
						front = rear = 0;
					else if(rear == n-1)
						rear = 0;
					else
						rear++;
					s[rear]=p;
					printf("%d is inserted at rear\n",p);
				}
				break;

			case 3:
				if(front == -1)
					printf("Queue is Empty\n");
				else
				{
					printf("%d is Deleted from front\n",s[front]);

					if(front == rear)
						front = rear = -1;
					else if(front == n-1)
						front = 0;
					else
						front++;
				}
				break;

			case 4:
				if(front == -1)
					printf("Queue is Empty\n");
				else
				{
					printf("%d is Deleted form rear\n",s[rear]);

					if(front == rear)
						front = rear = -1;
					else if(rear == 0)
						rear = n-1;
					else
						rear--;
				}
				break;

			case 5:
				if(front == -1)
					printf("Queue is empty\n");
				else
					printf("%d is on front\n",s[front]);
				break;

			case 6:
				if(front == -1)
					printf("Queue is empty\n");
				else
					printf("%d is on rear\n",s[rear]);
				break;

			case 7:
				if(front == -1)
					printf("Queue is empty\n");
				else
					printf("Queue is not empty\n");
				break;

			case 8:
				if((front == 0 && rear == n-1) || front == rear+1)
					printf("Queue is full\n");
				else
					printf("Queue is not full\n");
				break;

			case 9:
				return 0;

			default:
				printf("Invalid Number");
		}
	}
}
