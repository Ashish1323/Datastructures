#include<stdio.h>
int main()
{
	int a=9,*p1,*p2,b=99;
	p1=&a;
	p2=&b;
	int temp;
	temp=p1;
	p1=p2;
	p2=temp;
	printf("%d %d",*p1,*p2);
}
