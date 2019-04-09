#include<stdio.h>
int main()
{
	int i,k,s;
	for(i=2;i<=1000;i++)
	{
		s=0;
		for(k=1;k<i;k++)
		if(i%k==0)s+=k;
		if(s==i)printf("%d\t%d\n",i,s);
	}
}
