#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
}*top,*top1,*temp;
void push(int x)
{
	if(top==NULL)
	{
		top=(struct node*)malloc(sizeof(struct node));
		top->next=NULL;
		top->data=x;
	}
	else
	{
		temp=(struct node*)malloc(sizeof(struct node));
		temp->next=top;
		temp->data=x;
		top=temp;
	}
}
void pop()
{
	top1=top;
	if(top1==NULL)
	{
		printf("stack chudiyagaya");
	}
	else
	{
		top1=top1->next;
		printf("element udd gaya hai=%d",top);
		free(top);
		top=top1;
	}
}
void display()
{
	top1=top;
	if(top1==NULL)
	{
		printf("stack chudiyagaya");
	}
	else
	{
		if(top!=NULL)
		{
			printf("%d",top1->data);
			top1=top1->next;
		}
	}
}
void create()
{
	top=NULL;
}
void main()
{
	create();
	push(7);
	push(89);
	push(5);
	pop();
	display();
}
