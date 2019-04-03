#include<stdio.h>
#include<math.h>
int main()
{
	int i,k,s,t=1;
	for(i=1;i<100000;i++)
	{
		s=i+100;
		k=sqrt(s);
		if(k*k==s)
		{
			s=i+168;
			k=sqrt(s);
			if(k*k==s)
			{t=0;
			break;
			}
		}
	}
	printf("%d\n",i);
}
