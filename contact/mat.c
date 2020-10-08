#include<stdio.h>
#define p 50
#define q 50
void add(int [][p],int [][q],int,int,int,int);
void sub(int [][p],int [][q],int,int,int,int);
void mul(int [][p],int [][q],int,int,int,int);
int main()
{
int m,n,k,l;
printf("Enter number of rows of first matrix\n");
scanf("%d",&m);
printf("Enter number of columns of first matrix\n");
scanf("%d",&n);
int arr1[m][p];
printf("Enter first array elements\n");
for(int i=0;i<m;i++)
{
 for(int j=0;j<n;j++)
 {
  scanf("%d",&arr1[i][j]);
 }
}
printf("Enter number of rows of second matrix\n");
scanf("%d",&k);
printf("Enter number of columns of second matrix\n");
scanf("%d",&l);
int arr2[k][q];
printf("Enter second array elements\n");
for(int i=0;i<k;i++)
{
for(int j=0;j<l;j++)
{
scanf("%d",&arr2[i][j]);
}
} 
printf("Enter 1 for addition,2 for subtraction,3 for multiplication");
int ch;
scanf("%d",&ch);
switch(ch)
{
case 1:
add(arr1,arr2,m,n,k,l);
break;
case 2:
sub(arr1,arr2,m,n,k,l);
break;
case 3:
mul(arr1,arr2,m,n,k,l);
break;
default:
printf("Error in entry \n");
break;
}
return 0;
}
void add(int a[][p],int b[][q],int m,int n,int k,int l)
{
if(!(m==k&&n==l))
{
printf("Addition is not possible if the number of rows and columns of matrices are different\n");
}
else
{int c[m][n];
for(int i=0;i<m;i++)
 {
for(int j=0;j<n;j++)
  {
  c[i][j]=0;
  }
 }
for(int i=0;i<m;i++)
 {
  for(int j=0;j<n;j++)
  {
  c[i][j]=a[i][j]+b[i][j];
 }
}
printf("The sum of the matrices is\n");
for(int i=0;i<m;i++)
 {
  for(int j=0;j<n;j++)
  {
  printf("%d ",c[i][j]);
  }
        printf("\n");
 }
}
}
void sub(int a[][p],int b[][q],int m,int n,int k,int l)
{
if(!(m==k&&n==l))
{
printf("Subtraction is not possible if the number of rows and columns of matrices are different\n");
}
else
{int c[m][n];
for(int i=0;i<m;i++)
 {
for(int j=0;j<n;j++)
  {
  c[i][j]=0;
  }
 }
for(int i=0;i<m;i++)
 {
  for(int j=0;j<n;j++)
  {
  c[i][j]=a[i][j]-b[i][j];
 }
}
printf("The difference of the matrices is\n");
for(int i=0;i<m;i++)
 {
  for(int j=0;j<n;j++)
  {
  printf("%d ",c[i][j]);
  }
        printf("\n");
 }
}
}
void mul(int a[][p],int b[][q],int m,int n,int k,int l)
{
if(!(n==k))
{
printf("Multiplication is not possible if the number of rows of second matrix and number of columns of first matrices are different\n");
}
else
{int c[m][l];
for(int i=0;i<m;i++)
 {
for(int j=0;j<l;j++)
  {
  c[i][j]=0;
  }
 }
for(int i=0;i<m;i++)
 {
  for(int j=0;j<l;j++)
  {
for(int k=0;k<n;k++)
{
  c[i][j]+=a[i][k]*b[k][j];
} 
}
}
printf("The product of the matrices is\n");
for(int i=0;i<m;i++)
 {
  for(int j=0;j<l;j++)
  {
  printf("%d ",c[i][j]);
  }
        printf("\n");
 }
}
}

