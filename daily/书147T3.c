#include<stdio.h>
#include<stdlib.h>
typedef struct tre
{
	char c;
	struct tre *lc,*rc,*next;
 } tre,*tree;
 void creat(tree *p)//���� 
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
int geshu(tree p)//Ҷ�ӵĸ���
{
	if(p==NULL)return 0;
	else return 1+geshu(p->lc)+geshu(p->rc);
 } 
 int pd(tree p1,tree p2)//�Ƚ�������
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
  void  exchange(tree p)//�������ҽڵ� 
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
void look(tree p)//˫�����
{
	if(p)
	{printf("%c",p->c);
	look(p->lc);
	if(p->lc)printf("%c",p->c);
	look(p->rc);
	} 
}
 void bl(tree p)//�������
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
int  tj(tree p)//�������ͳ�ƶ�Ψһ�Ľ�� 
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
 void printl(tree p)//���ÿ��·��
{
	int i;
 }
 main()
 {
 	tree p;
 	creat(&p);
 	bl(p);//���� 
 	printf("%d\n",geshu(p));//����� 
 	printf("%d\n",tj(p));//��Ҷ�Ӹ��� 
	look(p);//˫����� 
 	printf("\n");
 	exchange(p);//������Ҷ���� 
 	bl(p);
 }
