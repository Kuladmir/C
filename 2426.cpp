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
	printf("�ȼ���⻬�ܣ��ټ���ֲڹ�:>");
	printf("�ȼ���߶Ȳ��µ����ݣ��ټ���ѹ���µ�����\n");
	printf("�ܶ�998kg/m3����0.9469*0.001pa*s���������ٶ�9.81N/m\n");
	printf("�⻬�ܹܾ�d1=0.008m,�ܳ�L1=1.68m���ֲڹܹܾ�d2=0.01m,�ܳ�L2=1.675m\n");
	printf("��=3.14���ֲ�����d3=0.015m\n");
	printf("������Ҫ���������(�⻬��+�߶Ȳ�):>");
	scanf("%d", &i);
	printf("����������(L/h):>");
	for (j = 0; j < i; j++)
	{
		scanf("%lf", &q[j]);
	}
	printf("������߶Ȳ�(cm):>");
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
	printf("����Ϊ:>");
	for (j = 0; j < i; j++)
		printf("%lf  ", u[j]);
	printf("\nѹ��Ϊ:>");
	for (j = 0; j < i; j++)
		printf("%lf  ", p[j]);
	printf("\nĦ��ϵ��:>");
	for (j = 0; j < i; j++)
		printf("%lf  ", n[j]);
	printf("\n��ŵ��:>");
	for (j = 0; j < i; j++)
		printf("%lf  ", Re[j]);
	printf("\n");
	//�⻬��+ѹ��
	printf("������Ҫ���������(�⻬��+ѹ��):>");
	scanf("%d", &i);
	printf("����������(L/h):>");
	for (j = 0; j < i; j++)
	{
		scanf("%lf", &q[j]);
	}
	printf("������ѹ��(kPa):>");
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
	printf("����Ϊ:>");
	for (j = 0; j < i; j++)
		printf("%lf  ", u[j]);
	printf("\nѹ��Ϊ:>");
	for (j = 0; j < i; j++)
		printf("%lf  ", h[j]);
	printf("\nĦ��ϵ��:>");
	for (j = 0; j < i; j++)
		printf("%lf  ", n[j]);
	printf("\n��ŵ��:>");
	for (j = 0; j < i; j++)
		printf("%lf  ", Re[j]);
	printf("\n");
	//�ֲڹ�
	printf("������Ҫ���������(�ֲڹ�+�߶Ȳ�):>");
	scanf("%d", &i);
	printf("����������(L/h):>");
	for (j = 0; j < i; j++)
	{
		scanf("%lf", &q[j]);
	}
	printf("������߶Ȳ�(cm):>");
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
	printf("����Ϊ:>");
	for (j = 0; j < i; j++)
		printf("%lf  ", u[j]);
	printf("\nѹ��Ϊ:>");
	for (j = 0; j < i; j++)
		printf("%lf  ", p[j]);
	printf("\nĦ��ϵ��:>");
	for (j = 0; j < i; j++)
		printf("%lf  ", n[j]);
	printf("\n��ŵ��:>");
	for (j = 0; j < i; j++)
		printf("%lf  ", Re[j]);
	printf("\n");
	//�ֲڹ�+ѹ��
	printf("������Ҫ���������(�ֲڹ�+�߶Ȳ�):>");
	scanf("%d", &i);
	printf("����������(L/h):>");
	for (j = 0; j < i; j++)
	{
		scanf("%lf", &q[j]);
	}
	printf("������ѹ��(kPa):>");
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
	printf("����Ϊ:>");
	for (j = 0; j < i; j++)
		printf("%lf  ", u[j]);
	printf("\nѹ��Ϊ:>");
	for (j = 0; j < i; j++)
		printf("%lf  ", h[j]);
	printf("\nĦ��ϵ��:>");
	for (j = 0; j < i; j++)
		printf("%lf  ", n[j]);
	printf("\n��ŵ��:>");
	for (j = 0; j < i; j++)
		printf("%lf  ", Re[j]);
	printf("\n");
	printf("���������ֲ���������:>");
	scanf("%d", &i);
	printf("����������(L/h):>");
	for (j = 0; j < i; j++)
		scanf("%lf", &q[j]);
	printf("���������ѹ��(cm):>");
	for (j = 0; j < i; j++)
		scanf("%lf",&p[j]);
	printf("������Զ��ѹ��(cm):>");
	for (j = 0; j < i; j++)
		scanf("%lf", &h[j]);
	for (j = 0; j < i; j++)
	{
		u[j] = q[j] * 0.004 / (3600 * PI * d3 * d3);
		n[j] = R * g * (2 * p[j] * 0.01 - h[j] * 0.01);//ѹǿ��
		Re[j] = 2 * n[j] / (R*u[j]*u[j]);//�ֲ�����ϵ��
	}
	printf("����Ϊ:>");
	for (j = 0; j < i; j++)
		printf("%lf  ", u[j]);
	printf("\n����ѹ��(pa):>");
	for (j = 0; j < i; j++)
		printf("%lf  ", R * g * p[j] * 0.01);
	printf("\nԶ��ѹ��(pa):>");
	for (j = 0; j < i; j++)
		printf("%lf  ", R * g * h[j] * 0.01);
	printf("\nѹǿ��(pa):>");
	for (j = 0; j < i; j++)
		printf("%lf  ", n[j]);
	printf("\n�ֲ�����ϵ��:>");
	for (j = 0; j < i; j++)
		printf("%lf  ", Re[j]);
	printf("\n");
	return 0;
}