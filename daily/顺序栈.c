#include<stdio.h>
#include<stdlib.h>
#define N sizeof(struct st)
struct st
{
	char name[20];
	int no;
	float s;
 };
 struct zan
 {
 	struct st *top;
 	struct st *base;
 	int num;
 };
 void creat(struct zan *p)
 {
 	int i,n;
 	printf("输入栈的个数\n");
 	scanf("%d",&n);
 	p->num=n;
 	printf("请输入学生姓名 学号 成绩\n");
 	for(i=1;i<=n;i++)
 	{
 		scanf("%s %d %f",p->top->name,&p->top->no,&p->top->s);
 		(p->top)++;
	 }
	 printf("\n");
  } 
  void print(struct zan *p)
  {
  	  do
  	  {
  	  	(p->top)--;
        printf("%s %d %.2f\t\n",p->top->name,p->top->no,p->top->s);
		}while(p->base!=p->top);
  }
  int main()
  {
  	struct st a[20];
  	struct zan p;
  	p.base=p.top=a;
  	creat(&p);
  	print(&p);
   } 
