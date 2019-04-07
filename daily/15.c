#include<stdio.h>
main()
{
	int s;
	scanf("%d",&s);
	if(s>=90)printf("\tA\n");
	else
	{
		if(s>=60)printf("\tB\n");
		else printf("\tC\n");
	}
}
