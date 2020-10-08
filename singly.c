#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
int head;
typedef struct node{
int data;
struct node*next;}node;
	node*allocate()
	{
		node*newnode;
		newnode=(node*)malloc(sizeof(node*));
		printf("enter chutiya");
		scanf("%d",&newnode->data);
		newnode->next=NULL;
		return newnode;
	}
	
	void create()
	{
		node*head;
		node*last;
		node*newnode=allocate();
		if(head==0)
		{
			head=newnode;
			last=newnode;
		}
		else
		{
			last->next=newnode;
			last=newnode;
		}
	}
	void display(struct node *temp)
	{
		temp=head;
		while(temp->next!=NULL)
		{
			printf("%d",temp->data);
			temp=temp->next;
		}
	}
	void inbeg()
	{
		
			struct node*newnode=allocate();
		newnode->next=head;
		head=newnode;	
	}
	void inend()
	{
	
		node*temp;
		
		temp=head;
		while(temp->next!=0)
		{
			temp=temp->next;
		}
			struct node*newnode=allocate();
		temp->next=newnode;
	}
	void inmid()
	{
		int i,pos;
		node*temp;
		 struct node*newnode=allocate();
		temp=head;
		printf("enter pos to be entered");
		scanf("%d",&pos);
		while(temp->next!=0)
		{
			if(i==pos-1)
			{
					struct node*newnode=allocate();
				newnode->next=temp->next;
				temp->next=newnode;
			}
			i++;
			temp=temp->next;
		}
	}
	
	void main()
{
	create();
	create();
	create();
	display(head);
	inbeg();
	display(head);
	inmid();
	display(head);
	inend();
	display(head);
}

