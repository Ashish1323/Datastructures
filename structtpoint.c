#include<stdio.h>
struct rect{
	int len,bred;
};
void intial(struct rect *r,int l,int b)
{
	r->bred=b;
	r->len=l;
	printf("%d %d\n",r->bred,r->len);
}

void area(struct rect r)
{
	int c=r.len*r.bred;
	printf("\t%d",c);
}
void change(struct rect *r,int l,int b)

{
	r->len=l;
	r->bred=b;
	printf("\nchange in value is %d and %d",r->bred,r->len);
}
int main()
{
	struct rect r={5,6
	};
	intial(&r,10,34);
	area(r);
	change(&r,4,5);
	
	
}
