#include<stdio.h>
	double Max(double x,double y,double z)
	{
		double max(double x,double y);
		double f;
		f=max(x,y);
		f=max(f,z);
		return (f);
	}
	double max(double x,double y)
	{
		double g;
		g=x>y?x:y;
		return (g);
	}
int main()
{	double a,b,c,d;//�ж��������Ĵ�С
	double arr[3]={0,0,0};
	scanf("%lf%lf%lf",&a,&b,&c);
	d=Max(a,b,c);
    printf("������Ϊ%lf\n",d);
	return 0;
}


