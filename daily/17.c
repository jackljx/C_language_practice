#include<stdio.h>
int main() {
	int a=0,b=0,c=0,d=0,i=0;
	char s[1000];
	gets(s);
	for(i=0; s[i]!='\0'; i++) {
		if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z')a++;
		else {
			if(s[i]==' ')b++;
			else {
				if(s[i]>='0'&&s[i]<='9')c++;
				else d++;
			}
		}
	}
	printf("��ĸ:%d\n�ո�:%d\n����:%d\n�����ַ�:%d\n",a,b,c,d);
}
