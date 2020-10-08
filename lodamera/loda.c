#include<stdio.h>
#include<stdlib.h>
void search(int m,int n,int key,int a[10][10])
{
	int i,j;
		for (i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(key==a[i][j])
			{
				printf("%d",a[i][j]);
				printf("key is found at %d %d",i+1,j+1);
			}
		}
	}
}



int main()
{
	int m,n,a[10][10],key,i,j;
	printf("enter the dimension of the array");
	scanf("%d %d",&m,&n);
	printf("enter the matrix of dimension %d and %d",m,n);
	for (i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}

printf("enter the element to be searched");
scanf("%d",&key);
search(m,n,key,a);
return 0;
}

