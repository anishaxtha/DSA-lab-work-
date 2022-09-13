//Implemantation of circular queue
#include<stdio.h>
#define SIZE 5 
struct  cqueue
{
	int item[SIZE];
	int rear, front;
};
struct  cqueue cq;
void enqueue (struct  cqueue *cq, int num)
{
	if ((cq->rear+1)%SIZE==cq->front)
	{
		printf("\n cirular queue overflow");
	}
	else{
	cq->rear=(cq->rear+1)%SIZE;
	cq->item [cq->rear]=num;
}
}
void dequeue (struct  cqueue *cq)
{
	int dt;
	if(cq->rear==cq->front)
	{
		printf("\n Queue underflow");
	}
	else
	{
		dt=cq->item[cq->front];
		cq->front=(cq->front+1)%SIZE;
		printf("\n Deleted item = %d",dt);
	}
}
void display (struct  cqueue *cq)
{
	int i;
	if(cq->rear==cq->front)
	{
		printf("\n cirular Queue is empty");
	}
	else
	{
		printf("\n content of circular queue is:\n");
		for(i=(cq->front+1)%SIZE; i!=cq->rear; i =(i+1)%SIZE)
		{
			printf("%d\t",cq->item[i]);
		}
	}
}
int main()
{
cq.front=SIZE-1;
cq.rear=SIZE-1;
int num, choice;
printf("1.enqueue\n 2.dequeue\n 3.\n display\n 4.exit");
while(1)
{
	printf("\n Enter your choice");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("\n Enter the no. you want to enqueue:");
			scanf("%d",&num);
			enqueue(&cq, num);
			break;
		case 2:
			dequeue(&cq);
			break;
		case 3:
			display(&cq);
			break;
		case 4:
			exit(0);
	}
}
return 0;
}
