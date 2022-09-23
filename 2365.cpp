#include<stdio.h>
double charge(double x,double y=6.4360)
{
	return (x/y);
}
int main()
{
	double a;
	printf("请输入需要兑换的人民币数量\n");
	scanf("%lf",&a);
	printf("对应的美元%lf\n",charge(a));
	printf("对应的日元%lf\n",charge(a,0.0588));
	printf("对应的港币%lf\n",charge(a,0.8286));
	printf("对应的英镑%lf\n",charge(a,9.0593));
    return 0;
}

