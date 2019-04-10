#include<stdio.h>
int main()
{
	char a[20];
	scanf("%s",a);
	gu(a,0);
}
void gu(char p[],int i)
{
	if(p[i+1]!='\0')
	{
	gu(p,i+1);
	printf("%c",p[i]);
}
	else printf("%c",p[i]);
	
}
