#include<stdio.h>
int main()
{
	printf("\t%d\n",ad(5));
}
int ad(int n)
 {
 	int s=1;
 	if(n==1)return s;
	 else return s*=n*ad(n-1); 
 }
