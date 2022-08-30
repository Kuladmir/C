#include<stdio.h>
int main()
{
	double a[1000],b[1000],e[1000];
	int c,j;
	double i,d;
	printf("        本程序可用来计算GPA,下为成绩对照表\n");
	printf(" A+ 4.0\tA 4.0\tA- 3.7\tB+ 3.3\tB 3.0\n ");
	printf("B- 2.7\tC+ 2.3\tC 2.0\tD+ 1.5\tD 1.0\n");
	printf("首先输入要计算的科目数\a\n");
	scanf("%d",&c);
	if(c==1)
	{
		printf("输入绩点成绩，再输入对应学分（注意输入的数量要对应科目数，绩点输完加回车，数字之间加空格）\n");
		scanf("%lf",&a[0]);
		scanf("%lf",&b[0]);
		d=a[0];
		printf("%lf\n",d);
	}
	if(c!=1)
	{
		i=0;
		d=0;
		printf("输入对应数量的绩点成绩，回车下一行输入学分\n");
		printf("当前计算%d门课的GPA(六位小数，四舍五入)\n",c);
		for(j=0;j<c;j++)
			scanf("%lf",&a[j]);
        for(j=0;j<c;j++)
			scanf("%lf",&b[j]);
		for(j=0;j<c;j++)
			i=i+b[j];
		for(j=0;j<c;j++)
			e[j]=a[j]*b[j];
		for(j=0;j<c;j++)
			d=e[j]/i+d;
		printf("输入科目总学分为 %lf\n",i);
		printf("输入科目总GPA为  %lf\n",d);
	}
	return 0;
}

