#include<stdio.h>
#include<stdlib.h>
typedef struct tre
{
	char c;
	struct tre *lc,*rc,*next;
 } tre,*tree;
 void creat(tree *p)//先序 
 {
 	char ch;
 	scanf("%c",&ch);
 	if(ch=='#')(*p)=NULL;
 	else 
 	{	(*p)=malloc(sizeof(tre));
 		(*p)->c=ch;
 		creat(&(*p)->lc);
 		creat(&(*p)->rc);
	 }
}
int geshu(tree p)//叶子的个数
{
	if(p==NULL)return 0;
	else return 1+geshu(p->lc)+geshu(p->rc);
 } 
 int pd(tree p1,tree p2)//比较两棵树
 {
 	int k=1,l,m;
	 if(p1->c==p2->c)
 	{
 		l=pd(p1->lc,p2->lc);
		 if(l==0&&k==1)k=0;
 		m=pd(p1->rc,p2->rc);
		 if(m==0&&k==1)k=0;
	 }
	 else return k;
  }
  void  exchange(tree p)//交换左右节点 
{
  	if(p){ 
	printf("ok\n");
	tree p1,p2;
	exchange(p->lc);
	exchange(p->rc);
	if(p->lc||p->rc) 
	{p1=p->lc;
	p2=p->rc;
	p->lc=p2;
	p->rc=p1;
	printf("ex ok\n");} 
	} 
} 
void look(tree p)//双序遍历
{
	if(p)
	{printf("%c",p->c);
	look(p->lc);
	if(p->lc)printf("%c",p->c);
	look(p->rc);
	} 
}
 void bl(tree p)//层序遍历
{
	tree a,b=NULL;
	a=p;
	while(a!=b)
	{
		if(a->lc!=NULL)
		{
		if(b==NULL){
		b=a->lc;a->next=b;}
		else {
		b->next=a->lc;
		b=b->next;}
		}
		if(a->rc!=NULL)
		{
			b->next=a->rc;
			b=b->next;
		}
		printf("%c",a->c);
		a=a->next;
	}
	printf("%c\n",a->c);
 } 
int  tj(tree p)//层序遍历统计度唯一的结点 
{
	tree a,b=NULL;
	a=p;
	int k1=1,k2=1,s=0; 
	while(a!=b)
	{
		if(a->lc!=NULL)
		{
		if(b==NULL)
		{
		b=a->lc;a->next=b;}
		else {
		b->next=a->lc;
		b=b->next;}
		k1=0;
		}
		if(a->rc!=NULL)
		{
			b->next=a->rc;
			b=b->next;
			k2=0;
		}
		a=a->next;
		if(k1+k2==1)s++;
		k1=1;k2=1;
	}
	return s;
 }
 void printl(tree p)//输出每条路径
{
	int i;
 }
 main()
 {
 	tree p;
 	creat(&p);
 	bl(p);//层序 
 	printf("%d\n",geshu(p));//结点数 
 	printf("%d\n",tj(p));//单叶子个数 
	look(p);//双序遍历 
 	printf("\n");
 	exchange(p);//左右子叶交换 
 	bl(p);
 }
