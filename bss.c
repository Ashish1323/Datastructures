#include<stdio.h>
#include<stdlib.h>
int bs(int a[],int low,int high,int x)
{
	int mid;
	mid=(high+low)/2;
	if (high>low)
	{
		return -1;
	}
	if(a[mid]==x)
	{
		return mid;
	}
	if(a[mid]<x)
	{
		return bs (a,mid+1,high,x);
	}
	else
	{
		return bs(a,low,mid-1,x);
	}
}
int main() {
  int a[100],i;
  int len, pos, search_item;
 
  printf("Enter the length of the array\n");
  scanf("%d", &len);
  
  printf("Enter the array elements\n");
  for (i=0; i<len; i++)
    scanf("%d", &a[i]);
 
  printf("Enter the element to search\n");
  scanf("%d", &search_item);
  
  pos = bs(a,0,len-1,search_item);
    if (pos < 0 )
    printf("Cannot find the element %d in the array.\n", search_item);
 
  else
    printf("The position of %d in the array is %d.\n", search_item, pos+1); 
    
  return 0;
}
