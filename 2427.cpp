#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#define A1 0.1106  //桶内表面积 m2
#define A0 0.000177 //流量计节流孔截面积 m2
#define A 0.00053066  //管的截面积
#define D 0.026  //实验管路内径 m
#define g 9.81  // N/kg
int main()
{
	double Rou, Miu;
	double p[30], h[30], Re[30], u[30], C[30], H[30], t[30], V[30];//H为液面上升高度 h为U管高度差
	double Mid[30];
	int i, j, k;
	printf("				本程序仅用来计算实验2\n");
	printf("本程序使用的参数：桶内表面积：0.1106 m^2，流量计节流孔截面积：1.77 * 10^-4 m^2\n");
	printf("实验管路内径：0.026 m，g = 9.81 N/kg\n");
	printf("请输入对应室温下流体密度（kg/m^3）:>");
	scanf("%lf", &Rou);
	printf("请输入对应室温下流体粘度（10^-3 Pa*s）:>");
	scanf("%lf", &Miu);
	printf("==========请输入 \"高度差\" 实验组数==========\n");
	printf("请输入:>");
	scanf("%d", &i);
	printf("请输入%d组U型管高度差（cm）的数据:>",i);
	for (j = 0; j < i; j++)
		scanf("%lf", &h[j]);
	if (i != 0)
	{
		printf("在测量液面高度上升时，每组是否使用了相同的计量时间？如果是，请输入1，否则输入0\n");
		scanf("%d", &k);
		if (k == 1)
		{
			printf("请输入%d组液面上升高度（cm）:>", i);
			for (j = 0; j < i; j++)
				scanf("%lf", &H[j]);
			printf("请输入单位时间（s）:>");
			scanf("%d", &k);
			for (j = 0; j < i; j++)
				V[j] = A1 * H[j] * 0.01 / k;
		}
		else
		{
			printf("请输入%d组液面上升高度（cm）:>", i);
			for (j = 0; j < i; j++)
				scanf("%lf", &H[j]);
			printf("请输入%d组计量时间（s）:>", i);
			for (j = 0; j < i; j++)
				scanf("%lf", &t[j]);
			for (j = 0; j < i; j++)
				V[j] = A1 * H[j] * 0.01 / t[j];
		}
		for (j = 0; j < i; j++)
		{
			p[j] = Rou * g * h[j] * 0.01;
			Mid[j] = Rou * 0.5 / p[j];
			C[j] = V[j] / A0 * sqrt(Mid[j]);
			u[j] = V[j] / A;
			Re[j] = D * u[j] * Rou / (Miu * 0.001);
		}
		printf("============结果============\n");
		printf("%d组压强差(Pa)数据:>", i);
		for (j = 0; j < i; j++)
			printf("%lf  ", p[j]);
		printf("\n%d组体积流量(m^3/s)数据:>", i);
		for (j = 0; j < i; j++)
			printf("%lf  ", V[j]);
		printf("\n%d组流量系数数据:>", i);
		for (j = 0; j < i; j++)
			printf("%lf  ", C[j]);
		printf("\n%d组流速(m/s)数据:>", i);
		for (j = 0; j < i; j++)
			printf("%lf  ", u[j]);
		printf("\n%d组雷诺数数据:>", i);
		for (j = 0; j < i; j++)
			printf("%lf  ", Re[j]);
		printf("\n");
	}


	printf("\n");
	printf("==========请输入 \"压强差\" 实验组数==========\n");
	printf("请输入:>");
	scanf("%d", &i);	
	if (i != 0)
	{
		printf("========注意零点压差========\n");
		printf("请输入%d组压差计（kPa）的数据:>", i);
		for (j = 0; j < i; j++)
			scanf("%lf", &p[j]);
		printf("在测量液面高度上升时，每组是否使用了相同的计量时间？如果是，请输入1，否则输入0\n");
		scanf("%d", &k);
		if (k == 1)
		{
			printf("请输入%d组液面上升高度（cm）:>", i);
			for (j = 0; j < i; j++)
				scanf("%lf", &H[j]);
			printf("请输入单位时间（s）:>");
			scanf("%d", &k);
			for (j = 0; j < i; j++)
				V[j] = A1 * H[j] * 0.01 / k;
		}
		else
		{
			printf("请输入%d组液面上升高度（cm）:>", i);
			for (j = 0; j < i; j++)
				scanf("%lf", &H[j]);
			printf("请输入%d组计量时间（s）:>", i);
			for (j = 0; j < i; j++)
				scanf("%lf", &t[j]);
			for (j = 0; j < i; j++)
				V[j] = A1 * H[j] * 0.01 / t[j];
		}
		for (j = 0; j < i; j++)
		{
			//p[j] = Rou * g * h[j] * 0.01;
			Mid[j] = Rou * 0.5 / (p[j]*1000);
			C[j] = V[j] / A0 * sqrt(Mid[j]);
			u[j] = V[j] / A;
			Re[j] = D * u[j] * Rou / (Miu * 0.001);
		}
		printf("\n============结果============\n");
		printf("%d组压强差(Pa)数据:>", i);
		for (j = 0; j < i; j++)
			printf("%lf  ", p[j]*1000);
		printf("\n%d组体积流量(m^3/s)数据:>", i);
		for (j = 0; j < i; j++)
			printf("%lf  ", V[j]);
		printf("\n%d组流量系数数据:>", i);
		for (j = 0; j < i; j++)
			printf("%lf  ", C[j]);
		printf("\n%d组流速(m/s)数据:>", i);
		for (j = 0; j < i; j++)
			printf("%lf  ", u[j]);
		printf("\n%d组雷诺数数据:>", i);
		for (j = 0; j < i; j++)
			printf("%lf  ", Re[j]);
		printf("\n");
	}
	printf("==========感谢使用本程序==========\n");
	return 0;
}