#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d",&a);
	b=0;
	c=0;
	while(a)
	{
		b++;
		c=c+a%10;
		a/=10;
	}
	printf("������%dλ��������λ����Ϊ%d\n",b,c);
	return 0;
}


