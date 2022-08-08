#include<stdio.h>
int main()
{
	double a,b,c,d,e,f,g,h,i,j;//规则更改，语句也要改
	printf("                      本次计算支持双精度浮点数。\n");
	printf("                      本次运算第一步先求a+b的数值。\n");
	printf("                      本次运算第二步再求a+b和与c的乘积。\n");
	printf("                      本次运算第三步再求上面乘积和d的差值。\n");
    printf("                      本次运算第四步再求上面差和e阶乘的和。\n");
    printf("                      请输入你想要计算的5个数字：\n");
	scanf("                        %lf,%lf,%lf,%lf,%lf",&a,&b,&c,&d,&e);
	f=a+b;
	g=f*c;
	h=g-d;
	double k,l;
	k=1;
	l=2;
	while(l<=e)
	{
		k=k*l;
	    l=l+1;
	}
    i=k;
	j=h+i;
	printf("                        The calculate is    %lf\n",j);
    printf("                       欢迎再次使用和修改本程序！！！\n");
	return 0;
}