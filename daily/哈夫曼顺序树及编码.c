#include<stdio.h>
#include<stdlib.h>
typedef struct
{
	int we;
	int pare,lc,rc;
 } ht,*htr;
 void creat(htr p,int n)
 {
 	int m=2*n-1,i,s1,s2;
 	for(i=1;i<=m;i++)
 	{
 		p[i].pare=0;
 		p[i].lc=0;
 		p[i].rc=0;
	 }
	 printf("输入权重\n");
	 for(i=1;i<=n;i++)
	 scanf("%d",&p[i].we);
	 for(i=n+1;i<=m;i++)
	 {
	 	select(p,i-1,&s1,&s2);
	 	p[s1].pare=i;p[s2].pare=i;
		p[i].lc=s1;p[i].rc=s2;
		p[i].we=p[s1].we+p[s2].we;
		printf("%d\n",p[i].we); 
	 }
 }
 void select(htr p,int n,int *x,int *y)
 {
 	int i,t=0;
 	*x=0;*y=0;
 	/*for(i=1;i<=n;i++)
 	{
 		if(p[i].pare==0)
 		{
 			if(t==0)
			 {
			 	t=p[i].we;
			 	*y=i;
			 }
			 else
			 {
			 	if(p[i].we<t)
			 	{
			 		*x=*y;
			 		*y=i;
			 		t=p[i].we;
				 }
			 }
		 }
	 }
	 if(*x==0)
	 {
	 	t=0;
	 	for(i=1;i<=n;i++)
	 	{
	 		if(p[i].pare==0&&i!=*y)
	 		{
	 			if(t==0)
	 			{
	 				t=p[i].we;
	 				*x=i;
				 }
				 else
				 if(p[i].we<t)
				 {
				 	*x=i;
				 	t=p[i].we;
				 }
			 }
		 }
	 }*/
	 if(*x==0)
	 {
	 	for(i=1;i<=n;i++)
	 	{
	 		if(p[i].pare==0)
	 		{
	 			if(t==0)
	 			{
	 				t=p[i].we;
	 				*x=i;
				 }
				 else
				 if(p[i].we<t)
				 {
				 	*x=i;
				 	t=p[i].we;
				 }
			 }
		 }}
		 t=0;
	if(*y==0)
	 {
	 	for(i=1;i<=n;i++)
	 	{
	 		if(p[i].pare==0&&i!=*x)
	 		{
	 			if(t==0)
	 			{
	 				t=p[i].we;
	 				*y=i;
				 }
				 else
				 if(p[i].we<t)
				 {
				 	*y=i;
				 	t=p[i].we;
				 }
			 }
		 }	 }
	 printf("%d %d\n",*x,*y);
 }
 void code(htr p,int n)//编码 
 {
 	char a[20];
 	int start,i,c,f,m;
 	for(i=1;i<=n;i++)
 	{
 		printf("%d  ",p[i].we);
 		c=i;
 		start=0;
 		f=p[i].pare;
 		while(f!=0)
 		{
 			if(p[f].lc==c)a[start++]='0';
 			else a[start++]='1';
 			c=f;
 			f=p[f].pare;
		 }
		 for(m=start-1;m>=0;m--)
		 printf("%c",a[m]);
		 printf("\n");
	 }
  } 
 int main()
 {
 	ht p[100];
 	int n;
 	printf("输入个数\n");
 	scanf("%d",&n);
 	creat(p,n);
 	code(p,n);
 }
