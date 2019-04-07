#include<stdio.h>
int main()
{
	long s[100];
	int i;
	
	for(i=1;i<31;i++)
	{
		if(i<3)s[i]=1;
		else s[i]=s[i-1]+s[i-2];
		printf("第%d个月有%-3ld个兔子\n",i,s[i]);
	}
		
int j=1,k=1,l;
printf("\t%d\n\t%d\n",j,k);
for(i=0;i<30;i++)
{
	l=j+k;
	printf("\t%d\n",l);
	k=j;
	j=l;
}
}
