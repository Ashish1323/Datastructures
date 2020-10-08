#include<stdio.h>
void fun(int n)
{
	int mul=1;
	if (n>0)
	
	{
		int mul=1;
		printf("%d",n);
		mul=mul+n;
		fun(n-1);
		
	}
	printf("final sum=%d",mul);
}
int main()
{
	int x=5;
	fun(x);
	
	
}

