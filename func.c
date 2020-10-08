#include<stdio.h>
int add(int a,int b)
{
	int c;
	c=a*b;
	return(c);
}
int main()
{
	int x,y,z;
	scanf("%d %d",&x,&y);
	z=add(x,y);
	printf("sum=%d",z);
	
}

