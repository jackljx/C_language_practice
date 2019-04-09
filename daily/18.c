#include<stdio.h>
int main()
{
	int a,n,i;
	long s=0,k=0;
	scanf("%d %d",&a,&n);
	for(i=1;i<=n;i++)
	{
		k+=a;
		printf("%ld\n",k); 
		s+=k;
		k*=10;
	}
	printf("%ld\n",s);
 } 
