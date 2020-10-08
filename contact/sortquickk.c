#include<stdio.h>
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
		do{i++;
		}while(a[i]<=pivot);
		do{j--;
		}while(a[j]>pivot);
		if(i<j)
		swap(&a[i],&a[j]);
	}while(i>j);
	swap(&a[pivot],&a[j]);
	return j;
}
int quicksort(int a[],int l,int h)
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
int	a[10]={2,4,5,67,1,3};
	quicksort(a,0,6);
	int i;
	for(i=0;i<6;i++)
	{
		printf("%d",a[i]);
	}
	printf("\n");
}

