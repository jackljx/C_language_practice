#include<stdio.h>
int main()
{
	printf("%d\n",di(5));
}
int di(int n)
{
	int s=0;
	if(n!=1)
	{s+=di(n-1)+2;
	//printf("%d\n",s);
	return s;}
	else return 10; 
}
