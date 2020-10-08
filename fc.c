#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*next;
}*top=NULL;
void push(int x)
{
	struct node *t;
	t=(struct node*)malloc(sizeof(struct node));
	t->data=x;
	t->next=top;
	top=t;
}
void display()
{
	struct node *t=top;
	while(t!=NULL)
	{
		printf(" %d \n",t->data);
		t=t->next;
	}
}
void pop()
{
	if(top==NULL)
	{
		printf("stack is empty");
	}
	else{

	struct node *t=top;
	printf("%d is poped",t->data);
	top=top->next;
	free(t);
	top=t;
}
}
void main()
{
	push(32);
	push(69);
	push(73);
	display();
	pop();
	display();
}
