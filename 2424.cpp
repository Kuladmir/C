#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define PI 3.14 //���妰
#define D 0.042 //����ѹǿ���ھ� m
#define d 0.036 //������ձ��ھ� m
//#define Rou 1000 //����ˮ���ܶ� kg/m^3
#define h 0.260 //����߶Ȳ� m
#define g 9.81 //�����������ٶ� N/kg
int main()
{
	printf("			�����������������ʵ��3�ⶨ����\n");
	printf("���Ǳ�����Ĭ�ϲ�ȡ�ĳ�����\n");
	printf("�� = %.2lf   ѹǿ���ھ�D = %.3lfm  ��ձ��ھ�d = %.3lfm   �߶Ȳ�h = %.2lfm   �������ٶ�g = %.2lfN/kg\n", PI, D, d, h, g);
	printf("�����޸ģ�����ϵ����Ա\n");
	printf("ע�⣺P��ָѹ���������P��ָ��ձ����������ʱҪȡ����ע��������\n");
	double a[30] = { 0 }, b[30] = { 0 }, c[30] = { 0 }, e[30] = { 0 }, f[30] = { 0 }, k[30] = { 0 }, l[30] = {0};
	int i, j,cho;
	double x[30] = { 0 }, y[30] = {0};
	double Rou;
	do
	{
		printf("������Ҫ�����������1-30��������0���˳�\n");
		scanf("%d", &i);		
		printf("������ʵ���¶��������ܶ�(kg/m3):>");
		scanf("%lf", &Rou);
		if (i != 0)
		{
			printf("��ϣ���������ı��������ݣ����ǹ�·�������ݣ�ǰ��������1������������2\n");
			scanf("%d", &cho);
			if (cho == 2)
			{
				printf("���������� %d �� P�� ������(MPa):>", i);
				for (j = 0; j < i; j++)
					scanf("%lf", &a[j]);//����p��
				printf("���������� %d �� P�� ������(MPa):>", i);
				for (j = 0; j < i; j++)
					scanf("%lf", &b[j]);//����p��
				printf("���������� %d �������Q(m3/h):>", i);
				for (j = 0; j < i; j++)
					scanf("%lf", &c[j]);//��������Q
				for (j = 0; j < i; j++)
				{
					x[j] = (a[j] - b[j]) * 1000000 / (Rou * g);
					y[j] = ((16 * c[j] * c[j] / (PI * PI * D * D * D * D)) - (16 * c[j] * c[j] / (PI * PI * d * d * d * d))) / (2 * g * 3600 * 3600);
					e[j] = x[j] + y[j] + h;
					printf("��%d�� H �Ľ����\n", j + 1);
					printf("���Ϊ%lf	", e[j]);
					printf("���У���ѹͷΪ%lf����ѹͷΪ%lf\n", x[j], y[j]);
					printf("\n");
				}
			}
			else
			{
				printf("���������� %d �� P�� ������(Mpa):>", i);
				for (j = 0; j < i; j++)
					scanf("%lf", &a[j]);//����p��
				printf("���������� %d �� P�� ������(Mpa):>", i);
				for (j = 0; j < i; j++)
					scanf("%lf", &b[j]);//����p��
				printf("���������� %d �������Q(m3/h):>", i);
				for (j = 0; j < i; j++)
					scanf("%lf", &c[j]);//��������Q
				printf("���������� %d �鹦�ʶ���(kw):>", i);
				for (j = 0; j < i; j++)
					scanf("%lf", &f[j]);//���չ��ʱ����
				printf("\n");
				for (j = 0; j < i; j++)
				{
					x[j] = (a[j] - b[j]) * 1000000 / (Rou * g);
					y[j] = ((16 * c[j] * c[j] / (PI * PI * D * D * D * D)) - (16 * c[j] * c[j] / (PI * PI * d * d * d * d))) / (2 * g * 3600 * 3600);
					e[j] = x[j] + y[j] + h;
					printf("��%d�� H �Ľ����\n", j + 1);
					printf("���Ϊ%lf	", e[j]);
					printf("���У���ѹͷΪ%lf����ѹͷΪ%lf\n", x[j], y[j]);
					printf("\n");
					k[j] = f[j] * 0.6;
					printf("��%d��� N �Ľ����\n", j + 1);
					printf("���Ϊ%lf	\n", k[j]);
					printf("\n");
					l[j] = (e[j] * c[j] * Rou / (102 * 3600)) / k[j];
					printf("��%d�� �� �Ľ����\n", j + 1);
					printf("���Ϊ%lf	\n", l[j]);
					printf("\n");
				}
			}
		}
		else
			printf("�˳�\n");
	} while (i);
	return 0;
}