#include<stdio.h>
#include<stdlib.h>
#define N sizeof(pep)
typedef struct people
{
	char name[20];
	char sex; 
	struct people *next;
}pep,*pop;
struct lie
{
	pop front;
	pop rear;
};
void chushi(struct lie *p1,struct lie *p2)
{
	p1->front=p1->rear=malloc(N);
	p2->front=p2->rear=malloc(N);
	p1->front=p1->rear=NULL;
	p2->front=p2->rear=NULL;
}
void shuru(struct lie *p1,struct lie *p2)
{
	int i,n;
	pop p;
	printf("请输入跳舞人数\n");
	scanf("%d",&n);
	printf("*****\n");
	printf("请输入跳舞者的姓名与性别（男性m，女性w）\n");
	for(i=1;i<=n;i++)
	{
		printf("%d\n",i); 
		p=(pop)malloc(N);
		scanf("%s",p->name);
		scanf("%c\n",&p->sex);
		if(p->sex=='m')
		{
			if(p1->front==NULL)
			{
			p1->front=p;
			p1->rear=p;
			}
			else 
			{
			p1->rear->next=p;
			p1->rear=p;
			}
		}
		if(p->sex=='w')
		{
			if(p2->front==NULL){
			p2->front=p;
			p2->rear=p;}
			else {
			p2->rear->next=p;
			p2->rear=p;}
		}
	}
	printf("*****\n");
	printf("%d\n",i);
	p1->rear->next=NULL;
	p2->rear->next=NULL;
	printf("*****\n");
}
void match(struct lie *p1,struct lie *p2)
{
	printf("男---女\n");
	while(p1->front!=NULL&&p2->front!=NULL)
	{
		printf("%s---%s\n",p1->front->name,p2->front->name);
		p1->front=p1->front->next;
		p2->front=p2->front->next;
	}
	while(p1->front!=NULL){
	printf("%s--\n",p1->front->name);
	p1->front=p1->front->next;}
	while(p2->front!=NULL){
	printf("--%s\n",p2->front->name);
	p2->front=p2->front->next;}
 }
 main()
 {
 	struct lie men,women;
 	chushi(&men,&women);
 	shuru(&men,&women);
 	printf("*****\n");
 	printf("%s",men.front->name); 
 	match(&men,&women);
 }
 
