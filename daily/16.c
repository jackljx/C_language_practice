#include<stdio.h>
main()
{
	int x,y,a,b,t;
	scanf("%d%d",&x,&y);
	int s;
	for(s=2;s<=x*y;s++)
	if(s%x==0&&s%y==0)
	{printf("��С������Ϊ%d\n",s);break;}
	if(x<y)
{t=x;x=y;y=t; } 
a=x;b=y; 
while(b!=0)
{ 
t=a%b; 
a=b; 
b=t; 
}printf("���Լ��Ϊ%d\n",a);
 } 
