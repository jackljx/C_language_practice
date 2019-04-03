#include<stdio.h>
int main()
{
	int a,b,c,s=0;
	for(a=1;a<5;a++)
	{
		for(b=1;b<5;b++)
		if(a!=b)
		for(c=1;c<5;c++)
		if(a!=c&&b!=c)
		printf("%d\n",a*100+b*10+c);
	}
}
