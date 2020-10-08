#include<stdio.h>
#define maxsize 50
int rear=-1;
int front=-1;
int q[maxsize];
int enq(int x)

{
	if(front==maxsize-1)
	{
		printf("queue bhara hua h \t");	
	}
	else
	{
		front=0;
		printf("enqued the element %d \t",x);
			rear++;
		q[rear]=x;
		
	}
}
int deq()
{
	if(front==-1|| rear<front)
	{
		printf("queue is empty");
	}
	else
	{
		printf("queue is dequed \n");
		++front;
		}
}
display()
{
	int i;
	for(i=front;i<=rear;i++)
	{
		printf("%d \n",q[i]);
	}
}
void main()
{
	enq(10);
	enq(15);
	enq(20);
	display();
	deq();
	display();
}
