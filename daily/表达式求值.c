#include<stdio.h>
#include<stdlib.h>
typedef struct shu
{
	int m;
	struct shu *next;
}shu;
typedef struct opnd
{
	shu *front;
	shu *rear;
}opnd;
typedef struct fu
{
	char c;
	struct fu *next;
}fu;
typedef struct optr
{
	fu *front;
	fu *rear;
}optr;
int pdz(char c)//ÅÐ¶ÏÊÇ·ñÎª×Ö·û k=1×Ö·ûk=0Êý×Ö 
{
	int k=1;
	if(c>47&&c<58)k=0;
	return k;
}
int pdk(char a,char b)//ÅÐ¶ÏÀ¨ºÅ
{
	int k=0;
	if(a=='('&&b==')')
	k=1;
	return k;
 } 
int pdd(char a,char b)//ÅÐ¶ÏÓÅÏÈ¼¶ k=1´óÓÚ£¬k=0Ð¡ÓÚ £¬k=2´íÎó 
{
	int k=2;
	if(a=='+')
	{
		switch(b)
		{
			case '+':k=1;break;
			case '-':k=1;break;
			case '*':k=0;break;
			case '/':k=0;break;
			case '(':k=0;break;
			case ')':k=1;break;
			case '#':k=1;break;
			default:printf("error1\n");break;
		}
	}
	if(a=='-')
	{
		switch(b)
		{
			case '+':k=1;break;
			case '-':k=1;break;
			case '*':k=0;break;
			case '/':k=0;break;
			case '(':k=0;break;
			case ')':k=1;break;
			case '#':k=1;break;
			default:printf("error2\n");break;
		}
	}
	if(a=='*')
	{
		switch(b)
		{
			case '+':k=1;break;
			case '-':k=1;break;
			case '*':k=1;break;
			case '/':k=1;break;
			case '(':k=0;break;
			case ')':k=1;break;
			case '#':k=1;break;
			default:printf("error3\n");break;
		}
	}
	if(a=='/')
	{
		switch(b)
		{
			case '+':k=1;break;
			case '-':k=1;break;
			case '*':k=1;break;
			case '/':k=1;break;
			case '(':k=0;break;
			case ')':k=1;break;
			case '#':k=1;break;
			default:printf("error4\n");break;
		}
	}
	if(a=='(')
	{
	if(b==')'||b=='#'){
	printf("error5\n");k=1;}
	else k=0;}
	if(a==')')
	{
	if(b=='('){
	printf("error6\n");k=1;}else k=1;}
	if(a=='#')
	{
	if(b==')'||b=='#')
	{
	printf("error7\n");k=1;
	}
	else k=0;
	}
	if(k==2)printf("error8\n");
	return k;
 }
char jisuan(int a,int b,char c)//Êý×Ö£¬Êý×Ö£¬ÔËËã·û 
 {
 	int s;
 	if(c=='+')s=a+b;
 	if(c=='-')s=a-b;
 	if(c=='*')s=a*b;
 	if(c=='/')s=a/b;
 	printf("jisok\n");
 	printf("%d\n",s);
 	return s+'0';
 }
 void ru1(opnd *p,char x)//Êý×Ö 
 {
 	shu *p1;
 	p1=malloc(sizeof(shu));
 	p1->m=x-'0';
 	if(p->front==NULL)
 	{
 		p1->next=NULL; 
		 p->front=p->rear=p1;
	 }
	 else
	 {
	 p1->next=p->rear;
 	p->rear=p1;}
 }
 void ru12(opnd *p,int x)
 {
 	shu *p1;
 	p1=malloc(sizeof(shu));
 	p1->m=x;
 	p1->next=p->rear;
 	p->rear=p1;
 }
 void ru2(optr *p,char y)//×Ö·û 
  {
  	fu *p1;
  	p1=malloc(sizeof(fu));
  	p1->c=y;
  	if(p->front==NULL)
 	{
 		p1->next=NULL; 
		 p->front=p->rear=p1;
	 }
	 else{
  	p1->next=p->rear;
  	p->rear=p1;}
  }
  int chu1(opnd *p)
  {
  	int x;
  	x=p->rear->m;
  	p->rear=p->rear->next;
  	printf("%d\n",x); 
	  return x; 
  }
  char chu2(optr *p)
  {
  	char y;
  	y=p->rear->c;
	  p->rear=p->rear->next;
	  printf("%c\n",y);
	  printf("%c\n",p->rear->c);
	  return y;
  }
 main()
 {
 	optr opt;
 	opnd opn;
 	opt.front=opt.rear=NULL;
 	opn.front=opn.rear=NULL;
 	char ch1,ch='a';
 	scanf("%c",&ch1);
 	if(ch1=='#')
 	{
 		ru2(&opt,ch1);
 		char f;
 		while(ch!='#'||opt.rear->c!='#') 
 		{	if(ch!='#')scanf("%c",&ch);
			 printf("yes\n");
			 if(pdz(ch)==0)ru1(&opn,ch);
			 if(pdz(ch)==1)
			 {
			 	if(pdd(opt.rear->c,ch)==0)
			 	ru2(&opt,ch);
			 	else if(pdd(opt.rear->c,ch)==1)
			 	{
			 		printf("jis\n");
					f=jisuan(chu1(&opn),chu1(&opn),chu2(&opt));
			 		ru1(&opn,f);
			 		if(pdk(opt.rear->c,ch))
			 		opt.rear=opt.rear->next;
			 		else if(ch!='#')ru2(&opt,ch);
				 }
				 else if(pdd(opt.rear->c,ch)==2)printf("error\n");
			} 
		 }
		 printf("%d\n",opn.rear->m);
	 }
 	
 }
