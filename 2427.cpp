#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#define A1 0.1106  //Ͱ�ڱ���� m2
#define A0 0.000177 //�����ƽ����׽���� m2
#define A 0.00053066  //�ܵĽ����
#define D 0.026  //ʵ���·�ھ� m
#define g 9.81  // N/kg
int main()
{
	double Rou, Miu;
	double p[30], h[30], Re[30], u[30], C[30], H[30], t[30], V[30];//HΪҺ�������߶� hΪU�ܸ߶Ȳ�
	double Mid[30];
	int i, j, k;
	printf("				���������������ʵ��2\n");
	printf("������ʹ�õĲ�����Ͱ�ڱ������0.1106 m^2�������ƽ����׽������1.77 * 10^-4 m^2\n");
	printf("ʵ���·�ھ���0.026 m��g = 9.81 N/kg\n");
	printf("�������Ӧ�����������ܶȣ�kg/m^3��:>");
	scanf("%lf", &Rou);
	printf("�������Ӧ����������ճ�ȣ�10^-3 Pa*s��:>");
	scanf("%lf", &Miu);
	printf("==========������ \"�߶Ȳ�\" ʵ������==========\n");
	printf("������:>");
	scanf("%d", &i);
	printf("������%d��U�͹ܸ߶Ȳcm��������:>",i);
	for (j = 0; j < i; j++)
		scanf("%lf", &h[j]);
	if (i != 0)
	{
		printf("�ڲ���Һ��߶�����ʱ��ÿ���Ƿ�ʹ������ͬ�ļ���ʱ�䣿����ǣ�������1����������0\n");
		scanf("%d", &k);
		if (k == 1)
		{
			printf("������%d��Һ�������߶ȣ�cm��:>", i);
			for (j = 0; j < i; j++)
				scanf("%lf", &H[j]);
			printf("�����뵥λʱ�䣨s��:>");
			scanf("%d", &k);
			for (j = 0; j < i; j++)
				V[j] = A1 * H[j] * 0.01 / k;
		}
		else
		{
			printf("������%d��Һ�������߶ȣ�cm��:>", i);
			for (j = 0; j < i; j++)
				scanf("%lf", &H[j]);
			printf("������%d�����ʱ�䣨s��:>", i);
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
		printf("============���============\n");
		printf("%d��ѹǿ��(Pa)����:>", i);
		for (j = 0; j < i; j++)
			printf("%lf  ", p[j]);
		printf("\n%d���������(m^3/s)����:>", i);
		for (j = 0; j < i; j++)
			printf("%lf  ", V[j]);
		printf("\n%d������ϵ������:>", i);
		for (j = 0; j < i; j++)
			printf("%lf  ", C[j]);
		printf("\n%d������(m/s)����:>", i);
		for (j = 0; j < i; j++)
			printf("%lf  ", u[j]);
		printf("\n%d����ŵ������:>", i);
		for (j = 0; j < i; j++)
			printf("%lf  ", Re[j]);
		printf("\n");
	}


	printf("\n");
	printf("==========������ \"ѹǿ��\" ʵ������==========\n");
	printf("������:>");
	scanf("%d", &i);	
	if (i != 0)
	{
		printf("========ע�����ѹ��========\n");
		printf("������%d��ѹ��ƣ�kPa��������:>", i);
		for (j = 0; j < i; j++)
			scanf("%lf", &p[j]);
		printf("�ڲ���Һ��߶�����ʱ��ÿ���Ƿ�ʹ������ͬ�ļ���ʱ�䣿����ǣ�������1����������0\n");
		scanf("%d", &k);
		if (k == 1)
		{
			printf("������%d��Һ�������߶ȣ�cm��:>", i);
			for (j = 0; j < i; j++)
				scanf("%lf", &H[j]);
			printf("�����뵥λʱ�䣨s��:>");
			scanf("%d", &k);
			for (j = 0; j < i; j++)
				V[j] = A1 * H[j] * 0.01 / k;
		}
		else
		{
			printf("������%d��Һ�������߶ȣ�cm��:>", i);
			for (j = 0; j < i; j++)
				scanf("%lf", &H[j]);
			printf("������%d�����ʱ�䣨s��:>", i);
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
		printf("\n============���============\n");
		printf("%d��ѹǿ��(Pa)����:>", i);
		for (j = 0; j < i; j++)
			printf("%lf  ", p[j]*1000);
		printf("\n%d���������(m^3/s)����:>", i);
		for (j = 0; j < i; j++)
			printf("%lf  ", V[j]);
		printf("\n%d������ϵ������:>", i);
		for (j = 0; j < i; j++)
			printf("%lf  ", C[j]);
		printf("\n%d������(m/s)����:>", i);
		for (j = 0; j < i; j++)
			printf("%lf  ", u[j]);
		printf("\n%d����ŵ������:>", i);
		for (j = 0; j < i; j++)
			printf("%lf  ", Re[j]);
		printf("\n");
	}
	printf("==========��лʹ�ñ�����==========\n");
	return 0;
}