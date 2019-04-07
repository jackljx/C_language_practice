#include<stdio.h>
int main()
{
	int n,i,k=2;
	scanf("%d",&n);
	while(n!=k)
	{
		if(n%k==0){n=n/k;printf("%d*",k);k=2;}
		if(n%k!=0)k++;
	}
	printf("%d\n",n);
}
