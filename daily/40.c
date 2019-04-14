#include<stdio.h>
int main()
{
	int a[5],i,t;
	for(i=0;i<5;i++)
	a[i]=i+1
	;
	for(i=0;i<5;i++)
	printf("%d\n",a[i]);
	for(i=0;i<2;i++)
	{
		t=a[i];
		a[i]=a[4-i];
		a[4-i]=t;
	}
	for(i=0;i<5;i++)
	printf("%d\n",a[i]);
 } 
