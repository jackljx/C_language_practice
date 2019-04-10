#include<stdio.h>
int main()
{
	long long s=0,k;
	long long int ad(int n);
	int i;
	for(i=1;i<=20;i++)
	{
		k=ad(i);
		printf(" %d\t%lld\n",i,k);
		s+=k;
	}
	printf("%lld\n",s);
 } 
 long long int ad(int n)
 {
 	long long s=1;
 	if(n==1)return s;
	 else return s*=n*ad(n-1); 
 }
