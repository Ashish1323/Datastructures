#include<stdio.h>
#include<stdlib.h>
struct node
{
int coeff;
int exp;
struct node *next;
};

typedef struct node *NODE;

NODE getnode()
{
NODE newnode;
newnode=(NODE)malloc(sizeof(struct node));
return newnode;
}

NODE attach(int coeff,int exp,NODE head)
{
NODE temp,cur;
temp=getnode();
temp->coeff=coeff;
temp->exp=exp;
cur=head->next;
while(cur->next!=head)
{cur=cur->next;}
cur->next=temp;
temp->next=head;
return head;
}

NODE read_poly(NODE head)
{
int i=1;int coeff;int exp;
printf("\nenter the coefficient as -999 to end poly\t");
while(1)
{ printf("\nenter the coefficient for %d term\t",i++);
scanf("\n%d",&coeff);
if(coeff==-999)
break;
printf("\nenter the exponent\t");
scanf("\n%d",&exp);
head=attach(coeff,exp,head);
}

return head;
}

NODE add_poly(NODE head1,NODE head2,NODE head3)
{
NODE a,b;
int coeff;int exp;
a=head1->next;
b=head2->next;
while(a!=head1 && b!=head2)
{
if(a->exp == b->exp)
{
coeff=a->coeff + b->coeff;
if(coeff!=0)
head3=attach(coeff,a->exp,head3);
a=a->next;
b=b->next;
    }

else if(a->exp > b->exp)
{head3=attach(a->coeff,a->exp,head3);
a=a->next;}
else
{head3=attach(b->coeff,b->exp,head3);
b=b->next;}
}

while(a!=head1)
{head3=attach(a->coeff,a->exp,head3);}
while(b!=head2)
{head3=attach(b->coeff,b->exp,head3);}

return head3;
}

void display(NODE head)
{
NODE temp;
if(head->next==head)
{
printf("\npolynomial does not exist");
return;
}
temp=head->next;
while(temp!=head)
{
printf("%dx^%d",temp->coeff,temp->exp);
temp=temp->next;
if(temp!=head)
printf("+");

}
}

void main()
{
NODE head1,head2,head3;
head1=getnode();
head2=getnode();
head3=getnode();
head1->next=head1;
head2->next=head2;
head3->next=head3;

printf("\n enter the first polynomial\t");
head1=read_poly(head1);
printf("\n enter the second polynomial\t");
head2=read_poly(head2);

head3=add_poly(head1,head2,head3);

printf("\n polynomial 1\t");
display(head1);
printf("\n polynomial 2\t");
display(head2);
printf("\n result\t");
display(head3);

}

