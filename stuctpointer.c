#include<stdio.h>
struct poinnt{
	int a;
	int b;
};
int main()
{
	struct poinnt *j;
	j=(struct poinnt*)malloc(sizeof(struct poinnt*))
	j->a=3;
	j->b=4;
	//int c;
	//c=j->a+j->b;
	printf("%d ",j->a);
}
