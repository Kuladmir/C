#include<stdio.h>
int main()
{
	int a,i;
	double b[100];
	double c[100];
	double d=0,e=0;
	printf("请输入要计算的科目数:>");
	scanf("%d",&a);
	printf("请先输入学分，后输入成绩。例如4 3.7 3 3.3\n");
	for(i=0;i<a;i++)
	{
		scanf("%lf",&b[i]);
		scanf("%lf",&c[i]);
		d+=b[i];
	}
	printf("%lf ",d);
	for(i=0;i<a;i++)
		e+=c[i]*b[i]/d;
	printf("你的成绩是：%.2lf\n",e);
	return 0;
}



	