#include<stdio.h>
#include<stdlib.h>
#define Max 32767
#define mvn 100
typedef struct
{
	//int ve[mvn];//顶点 
	char ve[mvn];
	int a[mvn][mvn];//权值 
	int ds,xs;//顶点数，连线数 
 }wang;
 void chus(wang *p)
 {
 	printf("输入顶点数和连线数\n");
 	scanf("%d %d",&p->ds,&p->xs);
 	getchar(); //清除缓存区 
 	int i,t,n,m,k;
 	//int x,y;
 	char x,y;
 	for(i=0;i<p->ds;i++)
 	for(t=0;t<p->ds;t++)
	p->a[i][t]=Max;
	printf("输入顶点\n");
	for(i=0;i<p->ds;i++)
	{
	//scanf("%d",&p->ve[i]);
	scanf("%c",&p->ve[i]);
	getchar();
	}
	for(t=0;t<p->xs;t++)
	{
		printf("输入顶点间的权重\n");
		//scanf("%d %d %d",&x,&y,&k);
		scanf("%c %c %d",&x,&y,&k);
		getchar();
		/*scanf("%c",&x);
		getchar();
		scanf("%c",&y);
		getchar();
		scanf("%d\n",&k);*/
		for(n=0;n<p->ds;n++)
		if(p->ve[n]==x)break;
		for(m=0;m<p->ds;m++)
		if(p->ve[m]==y)break;
		p->a[n][m]=k;
		//printf("%c  %c   %d\n",x,y,p->a[n][m]);
	}
 }
 void print(wang *p)
 {
 	int i,t;
 	for(i=0;i<p->ds;i++)
 	for(t=0;t<p->ds;t++)
 	if(p->a[i][t]!=Max)
 	//printf("%d--->%d %d\n",p->ve[i],p->ve[t],p->a[i][t]);
 	printf("%c--->%c %d\n",p->ve[i],p->ve[t],p->a[i][t]);
 }
 main()
 {
 	wang p;
 	chus(&p);
 	print(&p);
 }
