#include<stdio.h>
int main()
{
	float i,n=100,s=0;
	for(i=1;i<11;i++)
	{
		if(i==1)s+=n;
		else s+=2*n;
		n/=2;
	}
	printf("%f    %f\n",s,n);
}
