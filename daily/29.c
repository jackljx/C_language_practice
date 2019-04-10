#include<stdio.h>
int main()
{
	int s=0,a,b,c,d,e,n;
	scanf("%d",&n);
	a=n%10;
	if(a!=0)s++;
	b=n%100/10;
	if(b!=0)s++;
	c=n%1000/100;
	if(c!=0)s++;
	d=n%10000/1000;
	if(d!=0)s++;
	e=n/10000;
	if(e!=0)s++;
	printf("这是%d位数\n%d %d %d %d %d\n",s,a,b,c,d,e);
}
