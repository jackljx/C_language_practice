#include<stdio.h>
int main()
{
	int a,b,c,s=0;
	scanf("%d %d %d",&a,&b,&c);
	 int z[13]={0,31,28,31,30,31,30,31,30,31,30,31,30};
		if(pd(a)==0)z[2]=29;
		int i;
		for(i=0;i<b;i++)s+=z[i];
		s+=c;
		printf("%d\n",s);
}
int pd(int n)
{
	int k=1;
	if(n%4==0&&n%100!=0||n%400==0)
	k=0;
	return k;
}
