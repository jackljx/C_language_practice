#include<stdio.h>
#include<stdlib.h>
#define N sizeof(pep)
typedef struct people
{
	char a[20];
	struct people *next;
}pep,* pop;
void chushi(pop *front,pop *rear)//ͷ��β 
{
	int n,i;
	printf("����������\n");
	pop p;
	scanf("%d",&n);
	printf("�������˵�����\n");
	(*rear)=(*front)=(pop)malloc(N);
	scanf("%s",(*front)->a);
	for(i=1;i<n;i++)
	{
		p=malloc(N);
		scanf("%s",p->a);
		(*rear)->next=p;
		(*rear)=p;
	}
	(*rear)->next=NULL;
}
void add(pop *rear)
{
	pop p;
	p=malloc(N);
	scanf("%s",p->a);
	(*rear)->next=p;
	(*rear)=p;
	(*rear)->next=NULL;
}
void print(pop *front,pop *rear)
{
	pop p;
	if((*front)==(*rear))
	{printf("%s\n",(*front)->a);
	printf("���һ������\n");} 
	else 
	{
		p=(*front);
		printf("%s\n",(*front)->a);
		(*front)=(*front)->next;
		free(p);
	}
}
void match(pop *front1,pop *front2)
{
	while((*front1)&&(*front2))
	{
		printf("%s---%s\n",(*front1)->a,(*front2)->a);
		(*front1)=(*front1)->next;
		(*front2)=(*front2)->next;
	}
	while((*front1)){
	printf("%s--\n",(*front1)->a);
	(*front1)=(*front1)->next;}
	while((*front2)){
	printf("--%s\n",(*front2)->a);
	(*front2)=(*front2)->next;}
 } /*
main()
{
	pop rear,front;
	chushi(&front,&rear);
	int k;
	printf("�����밴1�������밴2\n");
	while(scanf("%d",&k)!=EOF)
	{
		switch(k)
		{
		case 1:add(&rear);break;
		case 2:print(&front,&rear);break;
		default:printf("�����밴1�������밴2\n");
		}
		printf("�����밴1�������밴2\n");
	}
}*/
main()
{
	pop front1,front2,rear1,rear2;
	printf("men\n");
	chushi(&front1,&rear1);
	printf("women\n");
	chushi(&front2,&rear2);
	match(&front1,&front2);
}
