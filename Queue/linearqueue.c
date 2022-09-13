//Implemntation of queue
#include<stdio.h>
#define SIZE 5
struct queue
{
	int item [SIZE];
	int rear, front;
};
struct queue q;
void enqueue (struct queue *q, int num)
{
	if(q->rear==SIZE -1)
	{
		printf("\n queue overflow");
	}
	else{

	q->rear++;
	q->item[q->rear]=num;
		}
	}

void Dequeue (struct queue *q)
{
	int dt;
	if(q->rear<q->front)
	{
		printf("\n Queue underflow");
	}
	else
	{
		dt=q->item[q->front];
		q->front++;
		printf("\n Deleted item=%d", dt);
	}
}
void display (struct queue *q)
{
	int i;
	if(q->rear<q->front)
	{
		printf("\n Queue is empty");
	}
	else{
		printf("\n content of queue is: \n ");
	for (i=q->front; i<q->rear; i++)
	{
		printf("%d\t",q->item[i]);
	}
}
}
int main()
{
	int num, choice;
	q.front=0;
	q.rear=-1;
	printf("1.enqueue\n 2.dequeue\n 3.display\n  4.exist");
	while(1)
	{
		printf("\n Enter your choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("\n Enter the no. you want to enqueue:");
				scanf("%d", &num);
				enqueue(&q, num);
				break;
			case 2:
				Dequeue(&q);
				break;
			case 3:
				display (&q);
				break;
			case 4:
				exit(1);	
		}
}
	return 0;
}
