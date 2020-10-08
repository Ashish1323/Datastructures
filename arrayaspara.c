#include<stdio.h>
void fun(int a[], int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
		}
		
}
int main()
{
	int a={3,2,21,23,4};
	fun(a,5);
	
}
