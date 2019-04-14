#include<stdio.h>
int main()
{
	int a[3][3],i,t,s=0;
	for(i=0;i<3;i++)
	for(t=0;t<3;t++)
	scanf("%d",&a[i][t]);
	for(i=0;i<3;i++)
	for(t=0;t<3;t++)
	{
		if(i==1)
		s+=a[i][t];
	}
	printf("%d\n",s);
}
