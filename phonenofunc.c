#include<stdio.h>

int phone_no(char ph_no[])
{
int alphabet = 0, number = 0, i; 
    for (i=0; ph_no[i]!= '\0'; i++) 
{
		if(isdigit(ph_no[i]!=0))
		{
			number++;
		}
}
		if(number==10)
		{	
	return 0;
	}
else{
	return 1;
}
}
int main()
{
	char ph_no[]="9427036281"; //phone no//
	/*printf("enter 10 ");
	scanf("%s",&ph_no[100]);*/
	phone_no( ph_no[] );
	return 0;
}
