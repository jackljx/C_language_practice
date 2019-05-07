#include<stdio.h>
#include<stdlib.h>
#define N sizeof(struct st)
struct st 
{
	int n;
	struct st *next;
 };
 int main()
 {
 	 void fun(struct st *p1,struct st *p2,struct st *p3);
	 int i;
 	struct st *la,*lb,*h1=NULL,*h2,*a,*h3,*p;
 	la=malloc(N);
 	scanf("%d",&la->n);
 	for(i=1;i<4;i++)
 	{	
 		if(i==1)h1=la;
 		else a->next=la;
 		a=la;
 		la=malloc(N);
 		scanf("%d",&la->n);
	 }
	 a->next=la;
	 la->next=NULL;
	 la=malloc(N);
	 scanf("%d",&la->n);
 	for(i=1;i<6;i++)
 	{	
 		if(i==1)h2=la;
 		else a->next=la;
 		a=la;
 		la=malloc(N);
 		scanf("%d",&la->n);
	 }
	 a->next=la;
	 la->next=NULL;
	 la=h1;
	 while(la!=NULL)
	 {
	 	printf("%d\n",la->n);
	 	la=la->next;
	 }
	 printf("\n");
	 la=h2;
	 while(la!=NULL)
	 {
	 	printf("%d\n",la->n);
	 	la=la->next;
	 }
	 printf("\n");
	 h3=malloc(N);
	 fun(h1,h2,h3);
	 p=h3->next;
	 while(p!=NULL)
	 {
	 	printf("%d\n",p->n);
	 	p=p->next;
	 }
 }
 void fun(struct st *p1,struct st *p2,struct st *p3)
 {
 	struct st *p,*l;
 	if(p1->n<p2->n)
 	{
 		p3->next=p1;
		 p=p1;
		 p1=p1->next;
		 p->next=NULL; 
	 }
	 else 
	 {
 		p3->next=p2;
		 p=p2;
		 p2=p2->next;
		 p->next=NULL; 
	 }
	 while(p1&&p2)
	 {
	 	if(p1->n<p2->n)
	 	{
	 		p3->next=p1;
	 		l=p1;
	 		p1=p1->next;
	 		l->next=p;
	 		p=l;
		 }
		 else 
		 {
	 		p3->next=p2;
	 		l=p2;
	 		p2=p2->next;
	 		l->next=p;
	 		p=l;
		 }
	 }
	 while(p1)
	 {
	 		p3->next=p1;
	 		l=p1;
	 		p1=p1->next;
	 		l->next=p;
	 		p=l;
		 }
	while(p2)
	{
	 		p3->next=p2;
	 		l=p2;
	 		p2=p2->next;
	 		l->next=p;
	 		p=l;
		 }
 }
