#include<stdio.h>
int main()
{
	int i,s=1;
	for(i=1;i<10;i++)
	{
		s*=2;
		s+=1;
		printf("%d\n",s); 
	}
}
