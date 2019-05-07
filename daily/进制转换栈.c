#include<stdio.h>
#include<stdlib.h>
#define N sizeof(struct za)
struct za
{
	int n;
	struct za *next;
 };
 int main()
{
	int n,i;
	struct za *head,*p,*l;
	printf("数与将转换的进制\n"); 
	scanf("%d %d",&n,&i);
	head=p=malloc(N);
	l=NULL;
	while(n>=i)
	{
		p=malloc(N);
		p->n=n%i;
		n=n/i;
		head->next=p;
		p->next=l;
		l=head->next;
	}
	if(n!=0)
	{
		p=malloc(N);
		p->n=n;
		head->next=p;
		p->next=l; 
	}
	print(head);
 } 
 void print(struct za *head)
 {
 	head=head->next;
	 while(head!=NULL)
 	{
 		printf("%d",head->n);
 		head=head->next;
	 }
	 printf("\n");
 }
