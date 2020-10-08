#include<stdio.h>
#define maxsize 50
int a[maxsize],head=0;
int push(int x)
{
	if(head==maxsize-1)
	{
		printf("the stack is full");
	}
	else
	{
		printf("pushed element is %d \n",x);
		a[head]=x;
		head++;
	}
}
int pop()
{
		int x=-1;
	if(head==-1)
	{
		printf("stack is underflown");
	}

	else{
		
	
		x=a[--head];
		
		
	}
	return x;
}
int display()
{
	int i;
	for(i=0;i<head;i++)
	{
		printf("%d \n",a[i]);
	}
}
void main()
{
	push(1);
	push(3);
	push(5);
	display();
	int z=pop();
	printf("%d is poped",z);
	display();
	push(6);
	display();
}
