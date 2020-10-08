#include<stdio.h>
#include<stdlib.h>
struct stack{
	int size;
	int top;
	int *s;
};
void create(struct stack *st)
{
	printf("enter size of array");
	scanf("%d",st->size);
	st->top=-1;
	st->s=(int*)malloc(st->size*sizeof(int));
}
void push(struct stack *st,int x)
{
	st->top=-1;
	if(st->top==st->size-1)
	
	{
		printf("stack is overflown");
	}
	else
	{
		st->top++;
		st->s[st->top]=x;
		printf("added element is %d",x);
	}
	
}
int pop(struct stack *st)
{
	int z=-1;
	if(st->top==-1)
	{
		printf("stack is underflown");
		
	}
	else
	{
		z=st->s[st->top];
		st->top--;
	}
	printf("poped element is %d",z);	
}
void display(struct stack st)
{
	int i;
	for(i=st.top;i>=0;i++)
	{
		printf("%d\n",st.s[i]);
		
	}
}
int main()
{
	struct stack st;
	create(&st);
	pop(&st);
	display(st);
}
