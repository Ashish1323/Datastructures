#include<stdio.h>
#include<stdlib.h>
#define maxsize 50
int rear=-1;
int front=-1;
int qa[maxsize];
void insert(int x)
{
	
	if(rear==maxsize-1)
	{
		printf("queue is fucked up");
	}
	else
	{
	
	front=0;
	/*printf("enter the element to be entered");
	scanf("%d",&x);*/
	rear++;
	qa[rear]=x;
}
}
void delete()
{
	if(front==-1 || front>rear)
	{
		printf("queue is onderflowm");
	}
	else
	{
		printf("deleted element is %d ",qa[front]);
		front++;
	}
}
void display()
{
	int i;
	for(i=front;i<=rear;i++)
	{
		printf("queue is mera %d",qa[i]);
	}
}

void main()
{
	insert(10);
	insert(20);
	delete();
	display();
}
