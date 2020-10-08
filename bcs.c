#include<stdio.h>
void main()
{
	int n;
	printf("enter the size of array");
	scanf("%d",&n);
	int a[n];
	printf("enter %d ele in array",n);
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the element to searched");
	int ele;
	scanf("%d",&ele);
	int x;
	x=bs(a,0,n-1,ele);
	if(x<0)
	{
		printf("nahi mila");
		
	}
	else{
		printf("mila at %d",x+1);
	}
}
int bs(int a[10],int l,int h,int ele)
{
	if(l>h)
	{
		return -1;
	}
	int m;
	m=(l+h)/2;
	if(l>h)
	{
		return -1;
	}
	else if(a[m]==ele)
	{
		return m;
	}
	else if(a[m]>ele)
	{
		return bs(a,l,m-1,ele);
	}
	else {
		return bs(a,m+1,h,ele);
	}
}
