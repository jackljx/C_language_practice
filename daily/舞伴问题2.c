#include<stdio.h>
#include<stdlib.h>
#define N sizeof(pep)
typedef struct people
{
	char name[20];
	char sex; 
	struct people *next;
}pep,*pop;
void chushi(pop *front1,pop *rear1,pop *front2,pop *rear2)//头和尾 
{
	int n,i;
	printf("请输入人数\n");
	pop p;
	//(*rear1)=(*front1)=(pop)malloc(N);
	(*front1)=NULL;
	//(*rear2)=(*front2)=(pop)malloc(N);
	(*front2)=NULL;
	scanf("%d",&n);
	printf("请输入人的姓名和性别男m，女w\n");
	for(i=1;i<=n;i++)
	{
		p=malloc(N);
		scanf("%s %c",p->name,&p->sex);
		if(p->sex=='m')
		{
			if((*front1)==NULL)
			{
				(*rear1)=(*front1)=p;
			}
			else
			{
				(*rear1)->next=p;
				(*rear1)=p;
			}
		}
		if(p->sex=='w')
		{
			if((*front2)==NULL)
			{
				(*rear2)=(*front2)=p;
			}
			else
			{
				(*rear2)->next=p;
				(*rear2)=p;
			}
		}
	}
	(*rear2)->next=NULL;
	(*rear1)->next=NULL;
}

void match(pop *front1,pop *front2)
{
	while((*front1)&&(*front2))
	{
		printf("%s---%s\n",(*front1)->name,(*front2)->name);
		(*front1)=(*front1)->next;
		(*front2)=(*front2)->next;
	}
	while((*front1)){
	printf("%s--\n",(*front1)->name);
	(*front1)=(*front1)->next;}
	while((*front2)){
	printf("--%s\n",(*front2)->name);
	(*front2)=(*front2)->next;}
 } 
main()
{
	pop front1,front2,rear1,rear2;
	chushi(&front1,&rear1,&front2,&rear2);
	match(&front1,&front2);
}
