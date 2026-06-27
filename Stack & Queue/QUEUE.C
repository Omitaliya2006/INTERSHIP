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
		printf("1.Enqueue\n");
		printf("2.Dequeue\n");
		printf("3.Front\n");
		printf("4.Isempty\n");
		printf("5.IsFull\n");
		printf("6.Exit\n");

		printf("Enter the Choice:\n");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1:
				if(rear == n-1)
					printf("Queue is full\n");
				else
				{
					printf("Enter value\n");
					scanf("%d",&p);

					if(front == -1)
						front=0;
					rear++;
					s[rear]=p;

					printf("%d is inserted\n",p);
				}
				break;

			case 2:
				if(front == -1 || front > rear)
					printf("Queue is empty\n");
				else
				{
					printf("%d is deleted\n",s[front]);
					front++;
				}
				break;

			case 3:
				if(front == -1 || front > rear)
					printf("Queue is empty\n");
				else
					printf("%d is front\n",s[front]);
				break;

			case 4:
				if(front == -1 || front > rear)
					printf("Queue is empty\n");
				else
					printf("Queue is not empty\n");
				break;

			case 5:
				if(rear == n-1)
					printf("Queue is full\n");
				else
					printf("Queue is not full\n");
				break;

			case 6:
				return 0;
		}
	}
	getch();
}
