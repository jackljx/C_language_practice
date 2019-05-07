#include<stdio.h>
#include<stdlib.h>
typedef struct shuye
{
	char c;
	int kl,kr;
	struct shuye *lc,*rc;
 }shuye,*shuy;
 shuy pre,pree;
 void chus()
 {
 	pre=(shuy)malloc(sizeof(shuye));
 	pree=pre; 
 	pre->rc=NULL;
  } 
 void creat(shuy *p)//先序 
 {
 	char ch;
 	scanf("%c",&ch);
 	if(ch=='#')(*p)=NULL;
 	else 
 	{	(*p)=malloc(sizeof(shuye));
 		(*p)->c=ch;
 		creat(&(*p)->lc);
 		creat(&(*p)->rc);
	 }
  }
  void lx(shuy p)//中序线索化
  {
	  if(p)
  	{
  		lx(p->lc);
  		if(p->lc==NULL)
  		{
  			p->kl=1;
  			p->lc=pre;
		  }
		  else p->kl=0;
		  if(pre->rc==NULL)
		  {
		  	pre->rc=p;
		  	pre->kr=1;
		  }
		  else pre->kr=0;
		  pre=p;
		  lx(p->rc);
	}
}
void print()
{
	shuy p;
	if(pree->rc==NULL)printf("error\n");
	p=pree->rc;
	while(p!=NULL)
	{
		printf("%c",p->c);
		p=p->rc;
	}
	printf("\n");
 } 
 void cha()
 {
 	shuy p,pp;
 	char ch;
 	printf("请输入查找的字符\n");
 	scanf("%c",&ch);
 	if(pree->rc==NULL)printf("error\n");
 	else {
 		p=pree->rc;
 		pp=pree;
 		while(p->c!=ch)
 		{
 			pp=p;
 			p=p->rc;
		 }
		 printf("%c-%c-%c\n",pp->c,p->c,p->rc->c); 
	 }
 }
main()
{
	shuy p;
	chus();
	creat(&p);
	printf("creat ok\n");
	lx(p);
	printf("连接完成 中序输出\n");
	print();
	cha();
}
