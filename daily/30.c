#include<stdio.h>
int main()
{
	int n,a,b,c,d,e;
	scanf("%d",&n);
	a=n%10;
	b=n%100/10;
	c=n%1000/100;
	d=n%10000/1000;
	e=n/10000;
	if(a==e&&b==d)
	printf("yes\n");
	else printf("no\n");
}
