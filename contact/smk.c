#include<stdio.h>
#include<stdlib.h>
void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	temp=*y;
}
int partition(int a[],int l,int h)
{
	int pivot;
	pivot=a[l];
	int i,j;
	i=l;
	j=h;
	do{
		do{i++;}while(a[i]<=pivot);
		do{j--;}while(a[j]>pivot);
		if(i<j)
		swap(&a[i],&a[j]);
	}while(i<j);
	swap(&a[pivot],&a[j]);
    return j;
}
void quicksort(int a[],int l,int h)
{
	int j;
	if(l<h)
	{
		j=partition(a,l,h);
		quicksort(a,l,j);
		quicksort(a,j+1,h);
	}
}
void main()
{

int i,n;
printf("enter no. of elements you want in your array\n");
scanf("%d",&n);
int a[n];
printf("enter data\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
	quicksort(a,0,n-1);
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	printf("\n");
}

