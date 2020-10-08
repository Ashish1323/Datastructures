#include<stdio.h>
struct poinnt{
	int a;
	int b;
};
int area(int x,int z)
{
	printf("%d",x*z);
}
int main()
{
	struct poinnt *j;
	j=(struct poinnt*)malloc(sizeof(struct poinnt*));
	j->a=3;
	j->b=4;
	int c;
	c=j->a+j->b;
	printf("%d ",c);
	area(j->a,j->b);
}
