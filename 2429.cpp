#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define g 9.81
#define PI 3.14
#define d 0.075
#define H 0.4
int main()
{
	double tc, tm, tv, Rou;
	double h[20];
	double Va[20], Vw, P[20], Pz[20], U[20];
	int i, j, cho;
	printf("			���������������ʵ����\n");
	printf("���Ǳ�ʵ��ʹ�õĳ�����\n");
	printf("PI=3.14��g=9.81 N/kg�����ϲ�߶�H=0.4 m���������ھ�d=0.075 m\n");
	printf("�ɽ��ƽ�V���ɿ�������Vh\n");
	printf("�Ƿ������ϣ���������1����������0:>");
	scanf("%d", &cho);
	if (cho == 1)
	{
		printf("=============================\n");
		printf("��ǰ�������\n");
		printf("=============================\n");
		printf("�������ʼ�¶Ⱥͽ����¶�:>");
		scanf("%Lf%lf", &tc, &tm);
		tv = (tc + tm) / 2;
		printf("���Ƕ����¶� %.2lf ��������Ӧ�¶��µ�ˮ���ܶȡ�\n", tv);
		printf("������Ҫ���������:>");
		scanf("%d", &i);
		printf("������ %d ��߶Ȳ�(cm):>", i);
		for (j = 0; j < i; j++)
			scanf("%lf", &h[j]);
		printf("������ %d ���������(m3/h):>", i);
		for (j = 0; j < i; j++)
			scanf("%lf", &Va[j]);
		printf("�����붨���¶���ˮ���ܶ�(kg/m3):>");
		scanf("%lf", &Rou);
		for (j = 0; j < i; j++)
		{
			P[j] = Rou * g * h[j] * 0.01;
			Pz[j] = P[j] / H;
			U[j] = (4 * Va[j]) / (3600 * PI * d * d);
		}
		printf("%d �馤P(Pa)����:>", i);
		for (j = 0; j < i; j++)
			printf("%lf  ", P[j]);
		printf("\n");
		printf("%d �馤P/Z(Pa/m)����:>", i);
		for (j = 0; j < i; j++)
			printf("%lf  ", Pz[j]);
		printf("\n");
		printf("%d ��u(m/s)����:>", i);
		for (j = 0; j < i; j++)
			printf("%lf  ", U[j]);
		printf("\n");
	}
	printf("�Ƿ����ˮ���ܣ���������1����������0:>");
	scanf("%d", &cho);
	if (cho == 1)
	{
		printf("=============================\n");
		printf("��ǰ����ˮ����\n");
		printf("=============================\n");
		printf("�����뵱ǰˮ��������(L/h)������0��Ϊ�˳�:>");
		scanf("%lf", &Vw);
		while (Vw)
		{
			printf("=============================\n");
			printf("��ǰˮ��������Ϊ %lf \n", Vw);
			printf("�������ʼ�¶Ⱥͽ����¶�:>");
			scanf("%Lf%lf", &tc, &tm);
			tv = (tc + tm) / 2;
			printf("���Ƕ����¶� %.2lf ��������Ӧ�¶��µ�ˮ���ܶȡ�\n", tv);
			printf("������Ҫ���������:>");
			scanf("%d", &i);
			printf("������ %d ��߶Ȳ�(cm):>", i);
			for (j = 0; j < i; j++)
				scanf("%lf", &h[j]);
			printf("������ %d ���������(m3/h):>", i);
			for (j = 0; j < i; j++)
				scanf("%lf", &Va[j]);
			printf("�����붨���¶���ˮ���ܶ�(kg/m3):>");
			scanf("%lf", &Rou);
			for (j = 0; j < i; j++)
			{
				P[j] = Rou * g * h[j] * 0.01;
				Pz[j] = P[j] / H;
				U[j] = (4 * Va[j]) / (3600 * PI * d * d);
			}
			printf("%d �馤P(Pa)����:>", i);
			for (j = 0; j < i; j++)
				printf("%lf  ", P[j]);
			printf("\n");
			printf("%d �馤P/Z(Pa/m)����:>", i);
			for (j = 0; j < i; j++)
				printf("%lf  ", Pz[j]);
			printf("\n");
			printf("%d ��u(m/s)����:>", i);
			for (j = 0; j < i; j++)
				printf("%lf  ", U[j]);
			printf("\n");
			printf("�����뵱ǰˮ��������(L/h)������0��Ϊ�˳�:>");
			scanf("%lf", &Vw);
		}
	}
	return 0;
}