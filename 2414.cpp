#include<stdio.h>
int main()
{
	double a,b,c,d,e,f;
	printf("                                ��ӭ�����Ǽ����У�����X��\n");
	printf("        ĳ����ְ����Ա(����):\"��������Ҫ��ı���[a]\"\n");
	printf("        (����):\"����ʵ�б���,��Ϣ�ϲ�����,ÿ��������ͬ��������Ҫ�������[b]\n");
	scanf("%lf,%lf",&a,&b);
	c=0.0195;
	e=1;
	while(e<=b)
	{
	d=a*0.025;
	a=a+d;
	e=e+1;
	}
	printf("(����):\"�����⼸����ϱ�����Ǯ��Ϊ.\"\n");
	printf("%lf\n",a);
	return 0;
}
