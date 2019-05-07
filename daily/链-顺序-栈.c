#include <stdio.h>
#include <stdlib.h>
#define N sizeof(struct st)
struct st
{
    char name[20];
    int n;
    float s;
    struct st *next;
};
struct zhan
{
     int num;
     struct st *top;
     struct st *base;
};
/*int main()
{
    struct st a[5];
    struct zhan p;

    p.num=5;
    p.base=a;
    p.top=a;
    ru(&p);
    dayin(&p);

}*/
int main()
{
    struct zhan p;
    p.num=5;
    creat(&p);
    print(&p);
}
void ru(struct zhan *p)
{
    int i;
    printf("creat\n");
    for(i=1;i<=p->num;i++)
    {
        scanf("%s %d %f",p->top->name,&p->top->n,&p->top->s);
        (p->top)++;
    }
}
void dayin(struct zhan  *p)
{
        int i;
        printf("\tprint\n");
    for(i=p->num;i>0;i--)
    {
        (p->top)--;
        printf("%s %d %.2f\t\t",p->top->name,p->top->n,p->top->s);
        printf("%d\n",i-1);
    }
}
void creat(struct zhan *p)
{
    int i;
    struct st *a,*b;
    printf("creating\n");
    for(i=1;i<=p->num;i++)
    {
        a=malloc(N);
        scanf("%s %d %f",a->name,&a->n,&a->s);
        if(i==1)
        {
            p->base=a;
            p->top=a;
            p->top->next=NULL;
            b=a;
        }
        else
        {
            p->top=a;
            p->top->next=b;
            b=p->top;
        }
    }
}
void print(struct zhan *p)
{
    printf("print\n");
    while(p->top!=NULL)
    {printf("%s %d %.2f\t\n",p->top->name,p->top->n,p->top->s);
    p->top=p->top->next;}
}
