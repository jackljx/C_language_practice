#include<stdio.h>
int main()
{
	int i,t;
	for(i=1;i<10;i++)
	{
		for(t=i;t<10;t++)
		printf("%d*%d=%d\t",i,t,i*t);
		printf("\n");
	 } 
}
