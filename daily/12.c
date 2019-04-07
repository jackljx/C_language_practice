#include<stdio.h>
int main()
{
	int k,i,t;
	for(i=100;i<200;i++)
	{
		k=1;
		for(t=2;t<i;t++)
		if(i%t==0)
		{k=0;break;}
		if(k==1)printf("\t%-4d\n",i);
	}
}
