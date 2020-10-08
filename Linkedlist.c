#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;	
}*head=NULL;
void create(int A[],int n)
{
	struct node *t,*last;
	head=(struct node*)malloc(sizeof(struct node));
	head->data=A[0];
	head->next=NULL;
	last=head;
	int i;
	for(i=1;i<n;i++)
	{
		t=(struct node*)malloc(sizeof(struct node));
		t->data=A[i];
		t->next=NULL;
		last->next=t;
		last=t;
	}
}

display(struct node *p)

{
	
    while(p!=NULL)
	{
		printf("%d\n",p->data);
		p=p->next;
	}
}
int main()
{
	int A[]={1,3,5,6,7,8};
	create(A,6);
	display(head);
	return 0;
}

