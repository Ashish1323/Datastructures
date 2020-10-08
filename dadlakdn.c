#include<stdio.h>
#include<stdlib.h>
struct ele{
	int i,j,x;
};
struct spar{
	int m,n,num;
	struct ele *e;
};
void cra(struct spar *s)
{
	int i,j;
	printf("enter row and column");
	scanf("%d %d",&s->m,&s->n);
	printf("enter the no of element");
	scanf("%d",&s->num);
	s->e=(struct ele *)malloc(s->num*sizeof(struct ele));
	for(i=0;i<s->num;i++)
	{
		scanf("%d %d %d",&s->e[i].i,&s->e[i].j,&s->e[i].x);
	}
}
void display(struct spar s)
{
	int k=0,i,j;	
	for(i=0;i<s.m;i++)
	{
	
	for(j=0;j<s.n;j++)
	{
		if((i==s.e[i].i)&& (j==s.e[i].j))
		{
		printf("%d",s.e[k++].x);
}
		else
		printf("0");
	}
	printf("\n");
}
}
int main()
{
	struct spar s;
	cra(&s);
	display(s);
	return 0;
}
