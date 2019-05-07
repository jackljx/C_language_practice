#include<stdio.h>
#include<stdlib.h>
typedef struct shuye
{
	char c;
	struct shuye *lc,*rc;
 } shuye,*shuy;
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
  void printz(shuy p)//中序遍历
  {
  	if(p!=NULL)
  	{
  		printz(p->lc);
  		printf("%c",p->c);
  		printz(p->rc);
	  }
   } 
   void printy(shuy p)//后序遍历
  {
  	if(p!=NULL)
  	{
  		printy(p->lc);
  		printy(p->rc);
  		printf("%c",p->c);
	  }
   } 
   main()
   {
   	shuy p;
   	creat(&p);
   	if(p==NULL)printf("error\n");
	printz(p);
	printf("\n"); 
	printy(p);
	printf("\n"); 
	} 
