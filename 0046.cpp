#include<stdio.h>
int main()
{
	int a,b,c,d,n;
	printf("������Ҫ���λ��;>");
	scanf("%d",&a);
	b=1;
	c=1;
	if(a==1 || a==2)
		printf("쳲��������е�%dλ��%d\n",a,b);
	if(a>=3)
	{
		for(n=3;n<=a;n++)
		{
			d=b+c;
			b=c;
			c=d;
		}
		printf("쳲��������е�%dλ��%d\n",a,d);
	}
	return 0;
}

