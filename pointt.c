#include<stdio.h>
struct rectangle{ int l;
int b;
};
int main()
{
	struct rectangle *p;
	p=(struct rectangle*)malloc(sizeof(struct rectangle));
	p->l=10;
	p->b=40;
	if (p->l<p->b)
	printf("%d",p->l);
	else
	printf("madarchod");
}
