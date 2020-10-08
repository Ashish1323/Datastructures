#include<stdio.h>
#include<stdlib.h>
#define maxsize 50
int top=-1,a[maxsize];
void push(int x)
{
	
	if(top==maxsize-1)
	{
		printf("stack is full");
		
	}
	else{
		a[top++]=x;
		printf("stack is pushed");
	}
}
void pop()
{
	if(top==-1)
	{
		printf("stack is underflown");
	}

	else{
		printf("stack is poped %d",a[top--]);
		
	}	
}
void display()
{
	int i;
	if(top==-1)
	{
		printf("stack is empty");
	}
	else
	{
		for(i=0;i<top;i++)
		{
			printf("%d",a[i]);
		}
	}
}
void main()
{
	int p,ch;
/*	while(1>0)
	{
	printf("enter choice 1- push\n choice 2- pop,\n choice 3- display\n choice 4- exit");
	scanf("%d",&ch);
	switch(ch){
	
		case 1: printf("enter element to pushed");
				scanf("%d",&p);
				push(p);
		case 2: pop();
		case 3: display();
		case 4: exit (0);
		default:printf("gaaand maara");		
}
}*/
push(4);
push(5);
push(6);
pop();
display();
}
