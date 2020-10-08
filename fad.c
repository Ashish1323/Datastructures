#include<stdio.h>

int phone_no(long int n)
{
int r;
int count=0;
	while(r>0)
	{
	r=n%10;
	r=r/10;
	count ++;
}
	if(count==10)
{
	printf("no is valid");
	
}
else{
	printf("invalid no");
}
}
int main()
{
	long int n;
	printf("enter 10 ");
	scanf("%ld",&n);
	phone_no(n);
}
