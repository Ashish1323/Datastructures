#include<stdio.h>
struct student{ int rollno;
char name[40];
}s[100];
int main()
{
	
	printf("enter the no of students for which student database is to be made\n");
	int i,n;
	scanf("%d",&n);
	int j=0;
	for(i=0;i<n;i++)
	{
	printf("enter data for student no %d",i);
	scanf("%s %d",s[i].name,&s[i].rollno);	
	
}

}
