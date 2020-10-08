#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node{
	int data;
	struct node *next;
}*top=NULL;
void push(int x)
{
	struct node *t;
	t=(struct node*)malloc(sizeof(struct node));
	if(t==NULL)
	{
		printf("stack is full");
	}
	t->data=x;
	t->next=top;
	top=t;
}
char pop()
{
	struct node *t;
	t=(struct node*)malloc(sizeof(struct node));
	if(t==NULL)
	{
		printf("stack is empty");
	}
	t=top;
	top=top->next;
	free(t);	
}
char display()
{
	struct node *p;
	if(p!=NULL)
{
	printf("%d",p->data);
	p=p->next;
}
}
int pre(int x)
{
	if( x=='+' || x=='y')
	{
		return 1;
	}
	if( x=='*' || x=='/')
	{
		return 2;
	}
	return 0;
}
int isoper(int x)
{
	if(x=='+'||x=='-'||x=='*'||x=='/')
	{
		return 0;
	}
	return 1;
}
char *ispost(char *infix)
{
	int i=0,j=0;
	char *postfix;
	int len=strlen(infix);
	postfix=(char*)malloc(sizeof(len+2));
	while(infix[i]!='\0')
	{
		if(isoper(infix[i]))
		postfix[j++]==infix[i++];
		else
		{
		 if(pre(infix[i])>pre(top->data))

                      push(infix[i++]);

                      else

                      {

                      postfix[j++]=pop();

           }

      }

           }

   while(top!=NULL)

           postfix[j++]=pop();

          

           postfix[j]='\0';

           return postfix;

}

 

int main()

{

           char *infix="a+b*c-d/e";

           push('#');

           char *postfix=ispost(infix);

           printf("%s ",postfix);

          

           return 0;

}
	


