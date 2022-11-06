#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define R 998
#define m 0.0009469
#define d1 0.008
#define d2 0.01
#define L1 1.68
#define L2 1.675
#define g 9.81
#define PI 3.14
#define d3 0.015
int main()
{
	double u[20], p[20], n[20], Re[20];
	double q[20], h[20];
	int i, j, k;
	printf("先计算光滑管，再计算粗糙管:>");
	printf("先计算高度差下的数据，再计算压差下的数据\n");
	printf("密度998kg/m3，黏度0.9469*0.001pa*s，重力加速度9.81N/m\n");
	printf("光滑管管径d1=0.008m,管长L1=1.68m；粗糙管管径d2=0.01m,管长L2=1.675m\n");
	printf("Π=3.14，局部阻力d3=0.015m\n");
	printf("请输入要计算的组数(光滑管+高度差):>");
	scanf("%d", &i);
	printf("请输入流量(L/h):>");
	for (j = 0; j < i; j++)
	{
		scanf("%lf", &q[j]);
	}
	printf("请输入高度差(cm):>");
	for (j = 0; j < i; j++)
	{
		scanf("%lf", &h[j]);
	}
	for (j = 0; j < i; j++)
	{
		u[j] = q[j] * 0.004 / (3600 * PI * d1 * d1);
		p[j] = R * g * h[j] * 0.01;
		n[j] = 2 * d1 * p[j] / (R * L1 * u[j] * u[j]);
		Re[j] = d1 * u[j] * R / m;
	}
	printf("流速为:>");
	for (j = 0; j < i; j++)
		printf("%lf  ", u[j]);
	printf("\n压差为:>");
	for (j = 0; j < i; j++)
		printf("%lf  ", p[j]);
	printf("\n摩擦系数:>");
	for (j = 0; j < i; j++)
		printf("%lf  ", n[j]);
	printf("\n雷诺数:>");
	for (j = 0; j < i; j++)
		printf("%lf  ", Re[j]);
	printf("\n");
	//光滑管+压差
	printf("请输入要计算的组数(光滑管+压差):>");
	scanf("%d", &i);
	printf("请输入流量(L/h):>");
	for (j = 0; j < i; j++)
	{
		scanf("%lf", &q[j]);
	}
	printf("请输入压差(kPa):>");
	for (j = 0; j < i; j++)
	{
		scanf("%lf", &h[j]);
	}
	for (j = 0; j < i; j++)
	{
		u[j] = q[j] * 0.004 / (3600 * PI * d1 * d1);
		n[j] = 2 * d1 * h[j] *1000 / (R * L1 * u[j] * u[j]);
		Re[j] = d1 * u[j] * R / m;
	}
	printf("流速为:>");
	for (j = 0; j < i; j++)
		printf("%lf  ", u[j]);
	printf("\n压差为:>");
	for (j = 0; j < i; j++)
		printf("%lf  ", h[j]);
	printf("\n摩擦系数:>");
	for (j = 0; j < i; j++)
		printf("%lf  ", n[j]);
	printf("\n雷诺数:>");
	for (j = 0; j < i; j++)
		printf("%lf  ", Re[j]);
	printf("\n");
	//粗糙管
	printf("请输入要计算的组数(粗糙管+高度差):>");
	scanf("%d", &i);
	printf("请输入流量(L/h):>");
	for (j = 0; j < i; j++)
	{
		scanf("%lf", &q[j]);
	}
	printf("请输入高度差(cm):>");
	for (j = 0; j < i; j++)
	{
		scanf("%lf", &h[j]);
	}
	for (j = 0; j < i; j++)
	{
		u[j] = q[j] * 0.004 / (3600 * PI * d2 * d2);
		p[j] = R * g * h[j] * 0.01;
		n[j] = 2 * d2 * p[j] / (R * L2 * u[j] * u[j]);
		Re[j] = d2 * u[j] * R / m;
	}
	printf("流速为:>");
	for (j = 0; j < i; j++)
		printf("%lf  ", u[j]);
	printf("\n压差为:>");
	for (j = 0; j < i; j++)
		printf("%lf  ", p[j]);
	printf("\n摩擦系数:>");
	for (j = 0; j < i; j++)
		printf("%lf  ", n[j]);
	printf("\n雷诺数:>");
	for (j = 0; j < i; j++)
		printf("%lf  ", Re[j]);
	printf("\n");
	//粗糙管+压差
	printf("请输入要计算的组数(粗糙管+高度差):>");
	scanf("%d", &i);
	printf("请输入流量(L/h):>");
	for (j = 0; j < i; j++)
	{
		scanf("%lf", &q[j]);
	}
	printf("请输入压差(kPa):>");
	for (j = 0; j < i; j++)
	{
		scanf("%lf", &h[j]);
	}
	for (j = 0; j < i; j++)
	{
		u[j] = q[j] * 0.004 / (3600 * PI * d2 * d2);
		n[j] = 2 * d2 * h[j] * 1000 / (R * L2 * u[j] * u[j]);
		Re[j] = d2 * u[j] * R / m;
	}
	printf("流速为:>");
	for (j = 0; j < i; j++)
		printf("%lf  ", u[j]);
	printf("\n压差为:>");
	for (j = 0; j < i; j++)
		printf("%lf  ", h[j]);
	printf("\n摩擦系数:>");
	for (j = 0; j < i; j++)
		printf("%lf  ", n[j]);
	printf("\n雷诺数:>");
	for (j = 0; j < i; j++)
		printf("%lf  ", Re[j]);
	printf("\n");
	printf("请输入计算局部阻力组数:>");
	scanf("%d", &i);
	printf("请输入流量(L/h):>");
	for (j = 0; j < i; j++)
		scanf("%lf", &q[j]);
	printf("请输入近端压差(cm):>");
	for (j = 0; j < i; j++)
		scanf("%lf",&p[j]);
	printf("请输入远端压差(cm):>");
	for (j = 0; j < i; j++)
		scanf("%lf", &h[j]);
	for (j = 0; j < i; j++)
	{
		u[j] = q[j] * 0.004 / (3600 * PI * d3 * d3);
		n[j] = R * g * (2 * p[j] * 0.01 - h[j] * 0.01);//压强降
		Re[j] = 2 * n[j] / (R*u[j]*u[j]);//局部阻力系数
	}
	printf("流速为:>");
	for (j = 0; j < i; j++)
		printf("%lf  ", u[j]);
	printf("\n近端压差(pa):>");
	for (j = 0; j < i; j++)
		printf("%lf  ", R * g * p[j] * 0.01);
	printf("\n远端压差(pa):>");
	for (j = 0; j < i; j++)
		printf("%lf  ", R * g * h[j] * 0.01);
	printf("\n压强降(pa):>");
	for (j = 0; j < i; j++)
		printf("%lf  ", n[j]);
	printf("\n局部阻力系数:>");
	for (j = 0; j < i; j++)
		printf("%lf  ", Re[j]);
	printf("\n");
	return 0;
}