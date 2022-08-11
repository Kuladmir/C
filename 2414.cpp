#include<stdio.h>
int main()
{
	double a,b,c,d,e,f;
	printf("                                欢迎来到星际银行（代号X）\n");
	printf("        某银行职工人员(瑞秋):\"请输入你要存的本金[a]\"\n");
	printf("        (瑞秋):\"本行实行本金,利息合并储存,每年利率相同，输入你要存的年数[b]\n");
	scanf("%lf,%lf",&a,&b);
	c=0.0195;
	e=1;
	while(e<=b)
	{
	d=a*0.025;
	a=a+d;
	e=e+1;
	}
	printf("(瑞秋):\"你在这几年加上本金获得钱数为.\"\n");
	printf("%lf\n",a);
	return 0;
}
