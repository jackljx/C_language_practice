#include<stdio.h>
int pd(int n)
{
	int i,k=1;
	for(i=2;i<n;i++)
	if(n%i==0)
	{
		k=0;
		break;
	}
	return k;
}
int main()
{
	int i;
	for(i=2;i<101;i++)
	if(pd(i))
	printf("%d\n",i);
}
