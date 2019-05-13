#include<stdio.h>
#include<stdlib.h>
#define mvn 100
typedef struct bjd
{
    int nz;
    struct bjd *nextb;
    int qz;
}bjd;
typedef struct dd
{
    char c;
    bjd *fb;
}dd,did[mvn];
typedef struct
{
    did ding;
    int ds,xs;
}lj;
void creat(lj *p)
{
    printf("输入顶点数和连线数\n");
 	scanf("%d %d",&p->ds,&p->xs);
 	getchar();
 	int i,t,n,m,k;
 	char x,y;
	 printf("输入顶点\n"); 
 	for(i=0;i<p->ds;i++)
 	{
 	    scanf("%c",&p->ding[i].c);
 	    getchar();
 	    p->ding[i].fb=NULL;
 	}
 	for(i=0;i<p->xs;i++)
 	{
 	    printf("输入顶点间的权重\n");
		scanf("%c %c %d",&x,&y,&k);
		getchar();
        for(n=0;n<p->ds;n++)
		if(p->ding[n].c==x)break;
		for(m=0;m<p->ds;m++)
		if(p->ding[m].c==y)break;
		bjd *p1;
		p1=malloc(sizeof(bjd));
		p1->qz=k;
		p1->nz=m;
		p1->nextb=p->ding[n].fb;
		p->ding[n].fb=p1;
 	}
}
void print(lj *p)
{
    int i,t;
    bjd *p1;
    for(i=0;i<p->ds;i++)
    {
        p1=p->ding[i].fb;
        while(p1!=NULL)
        {
            t=p1->nz;
            printf("%c-->%c   %d\n",p->ding[i].c,p->ding[t].c,p1->qz);
            p1=p1->nextb;
        }
    }
}
main()
{
    lj p;
    creat(&p);
    print(&p);
}
