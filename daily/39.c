#include<stdio.h>
int main()
{
	printf("����������ʮ����\n");
	int i,a[11],k,t,n;
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	printf("����������ʮ����\n");
	scanf("%d",&n);
	if(a[0]>a[1])k=1;
	else k=0;
	if(k==1)//�ݼ�
	{
		for(i=0;i<10;i++)
		{
			if(a[i]<n)
			{
			t=i;
			break;}
			t=i;
		}
		if(t==9)
		a[10]=n;
		else{
		for(i=10;i>t;i--)
		a[i]=a[i-1];
		a[t]=n;}
	 }
	 if(k==0)
	 {
	 	for(i=0;i<10;i++)
		{
			if(a[i]>n)
			{
				t=i;
			break;}
			t=i;
		
		}
		if(t==9)
		a[10]=n;
		else{
		for(i=10;i>t;i--)
		a[i]=a[i-1];
		a[t]=n;}
	  } 
	  for(i=0;i<11;i++)
	  printf("%d\n",a[i]);
}