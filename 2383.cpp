#include<stdio.h>
int main()
{
	int a,b,c;
	printf("                         ��������������������ÿһλ���֮�����ж��Ǽ�λ��\n");
	b=0;
	c=0;
	scanf("%d",&a);
	printf("������%d���м���\n",a);
	while(a)
	{
		b=b+a%10;
		a=a/10;
		c=c+1;
	}
	printf("ÿһλ֮��Ϊ%d\n",b);
	printf("����%dλ��\n",c);
	return 0;
}


