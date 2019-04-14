#include<stdio.h>
int main()
{
	int i,a[10],k,t,l;
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	for(i=0;i<9;i++)
	{
		k=i;
		for(t=i;t<10;t++)
		if(a[k]<a[t])k=t;
		l=a[i];
		a[i]=a[k];
		a[k]=l;
	}
	for(i=0;i<10;i++)
	printf("%d\n",a[i]);
}
