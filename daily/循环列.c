#include <stdio.h>
#include <stdlib.h>
#define N sizeof(struct st)
struct st
{
    char name[20];
    int no;
    float s;
}a[10];
struct lie
{
    struct st *rear;//ͷ
    struct st *front;//β
};
void chu(struct lie *p)
{
    //printf("********\n");
    p->rear=p->front=a;
}
void fu(struct lie *p)
{
    //printf("********\n");
     int i,n;
    if(p->rear==NULL)printf("error\n");
    //printf("********\n");
    printf("����ĸ���\n");
    scanf("%d",&n);
    printf("����ѧ��������ѧ�ţ��ɼ�\n");
    scanf("%s %d %f",p->rear->name,&p->rear->no,&p->rear->s);
	for(i=1;i<n;i++)
    {
        if(p->front==&a[9])//a+9
        {printf("stop shu ru\n");break;}
        else (p->front)++;
        scanf("%s %d %f",p->front->name,&p->front->no,&p->front->s);
    }
}
void add(struct lie *p)
{
    if(p->front==&a[9]&&p->rear==&a[0]||p->front==p->rear)
    printf("����\n");
    else
    {
        if(p->front==&a[9])p->front=&a[0];
    	else (p->front)++;
        scanf("%s %d %f",p->front->name,&p->front->no,&p->front->s);
    }
}
void print(struct lie *p)
{ 
	printf("%s  %d  %.2f\n",p->rear->name,p->rear->no,p->rear->s);
	 struct st *l;
	 l=p->rear; 
    if(p->rear==&a[9])p->rear=a;
    else (p->rear)++;
    l=NULL;
}
/*void long(struct lie *p)
{
    int l;
}*/
int main()
{
    struct lie p;
    chu(&p);
    //printf("********\n");
    fu(&p);
    int k;
    printf("�����밴1�������밴2\n");
    while(scanf("%d",&k)!=EOF)
    {
        switch(k)
        {case 1:add(&p);break;
        case 2:print(&p);break;
        default:printf("���������������밴1�������밴2\n");
        }
        printf("�����밴1�������밴2\n");
    }
}
