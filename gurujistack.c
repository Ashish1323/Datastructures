#include<stdio.h>
#include<stdlib.h>
struct sta{
	int top;
	int *s;
	int size;
};
void push(struct sta *st,int x)
{
	

	if(st->top==st->size-1)
	printf("stack is overflow");
	else{
	
	st->top++;
	st->s[st->top]=x;
//	printf("%d is added at top of stack\n",x);
}
}
int pop(struct sta *st)
{
int x=-1;
	if(st->top==-1)
	printf("stack is chutiya");
	else
	{
	
	x=st->s[st->top];
	st->top--;

}
return x;
}



//int peek(struct sta st,int pos)
//{
//	int x=0;
//	if(st.top-pos+1<0)
//	printf("invalid ");
//	else
//	{
//		x=st.s[st.top-pos+1];
//	}
//	return x;
//	
//}
//void display(struct sta *st)
//{
//	int i=0;
//  // st->s=(struct size*)malloc(st->size);
//	for(i=0;i<st->top;i++)
//	{
//		printf("%d",st->s[i]);
//		
//	}
//}

int main()
{
	
	struct sta st;
	
	printf("enter size and top element");
	scanf("%d",&st.size);
	st.top=-1;
	
		st.s=(int *)malloc(st.size);
	push(&st,4);
	push(&st,6);
	push(&st,8);
	int value=pop(&st);
	printf("%d",value);
//	peek(st,1);
//	display(&st);
}


