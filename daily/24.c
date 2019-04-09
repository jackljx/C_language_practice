#include<stdio.h>
int main()
{
	int i,t;
	double a[30],s=0;
	a[0]=1;a[1]=1;
	for(i=2;i<30;i++)
	{
	a[i]=a[i-1]+a[i-2];
 	printf("%lf\n",a[i]);}
	 for(i=1;i<21;i++)
 	{
 		printf("%lf\n",a[i+1]/a[i]);
 		s+=a[i+1]/a[i];
	 }
	 printf("%lf\n",s);
 } 
