#include<stdio.h>
#include<stdlib.h>
#define N sizeof(struct st)
struct st
{
	char name[20];
	int no;
	float s;
	struct st *next;
 };
 struct st *creat()
 {
 	int n,i;
 	struct st *a,*b;
 	printf("����ջ�ĸ���\n");
 	scanf("%d",&n);
 	printf("������ѧ������ ѧ�� �ɼ�\n");
 	for(i=1;i<=n;i++)
 	{
 		a=malloc(N);
 		scanf("%s %d %f",a->name,&a->no,&a->s);
 		if(i==1)
 		a->next=NULL;
		 else a->next=b;
		 b=a; 
	 }
	 printf("\n");
	 return b;
 }
 void print(struct st *top)
 {
 	while(top!=NULL)
 	{
 		printf("%s %d %.2f\n",top->name,top->no,top->s);
 		top=top->next;
	 }
 }
 int main()
 {
 	struct st *top;
 	top=creat();
 	print(top);
 }
