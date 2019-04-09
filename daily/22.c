#include<stdio.h>
int main()
{
	char a,b,c;
	for(a='y';a<='z';a++)
	{
		for(b='x';b<='z';b++)
		if(a!=b)
		{
			c='y';
			if(b!=c&&a!=c)
			printf("a--%c\nb--%c\nc--%c\n",a,b,c); 
		}
	}
}
