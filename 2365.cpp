#include<stdio.h>
double charge(double x,double y=6.4360)
{
	return (x/y);
}
int main()
{
	double a;
	printf("��������Ҫ�һ������������\n");
	scanf("%lf",&a);
	printf("��Ӧ����Ԫ%lf\n",charge(a));
	printf("��Ӧ����Ԫ%lf\n",charge(a,0.0588));
	printf("��Ӧ�ĸ۱�%lf\n",charge(a,0.8286));
	printf("��Ӧ��Ӣ��%lf\n",charge(a,9.0593));
    return 0;
}

