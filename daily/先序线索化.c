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
 	pre->lc=NULL;
 	pre->c='O';
 }
 void creat(shuy *p)//���� 
 {
 	char ch;
 	scanf("%c",&ch);
 	if(ch=='#')
	 (*p)=NULL;
 	else 
 	{	(*p)=malloc(sizeof(shuye));
 		(*p)->c=ch;
 		creat(&(*p)->lc);
 		creat(&(*p)->rc);
	 }
  }
  void lx(shuy p)//����������
  {
  	printf("okk\n");
	  if(p)
  	{
  		if(pre->lc==NULL)
  		{
  			pre->lc=p;
  			pre->kl=1; 
		  }
		  else pre->kl=0;
		  if(p->rc==NULL)//���������ѭ�� 
		  {
		  	p->kr=1;
		  	p->rc=pre; 
		  }
		  else p->kr=0;
		  pre=p;
		  if(p->kl==0)//��ֹ����ѭ�� 
		  lx(p->lc);
		  if(p->kr==0)
		  lx(p->rc); 
	}
}
void print()
{
	shuy p;
	if(pree->lc==NULL)printf("error\n");
	p=pree->lc;
	while(p!=NULL)
	{
		printf("%c",p->c);
		p=p->lc;
	}
	printf("\n");
 } 
main()
{
	shuy p;
	chus();
	creat(&p);
	printf("creat ok\n");
	lx(p);
	printf("������� �������\n");
	print();
}
