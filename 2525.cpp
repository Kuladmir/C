#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#define PI 3.14
#define d2 0.02
#define d3 0.019
#define L2 1.2
#define d0 0.017
#define C0 0.65
void manu()
{
	printf("		�˳������������ʵ��4���������\n");
	printf("���Ǳ�����Ĭ���趨��һЩ�����������޸ģ�����ϵ����Ա\n");
	printf("�� = %.2lf   �׹ܻ������ھ�d2 = %.2lfm   �׹ܻ���������L2 = %.2lfm\n", PI, d2, L2);
	printf("�װ�������ϵ��C0 = %.2lf   �װ��������ھ�d0 = %.2lfm\n", C0, d0);
}
int main()
{
	manu();
	double aJ[10], aC[10], kb[10],bm[10],tJ[10],tC[10],V[10],W[10],Q[10],z[10];
	double U[10], Nu[10], Re[10], Pr[10];
	double S, A,rou[10], cp[10], u[10], n[10];
	int i, j, cho;
	do
	{
		printf("������Ҫ�������ͨ�����ݵ�������1-5��,���ϣ���˳�������0��������:>");
		scanf("%d", &i);
		printf("����������%d�������¶�:>", i);
		for (j = 0; j < i; j++)
			scanf("%lf", &aJ[j]);
		printf("����������%d�������¶�:>", i);
		for (j = 0; j < i; j++)
			scanf("%lf", &aC[j]);
		printf("���Դ�����%d���װ�ѹ��(kpa):>", i);
		for (j = 0; j < i; j++)
			scanf("%lf", &kb[j]);
		printf("���Դ�����%d�������¶�:>", i);
		for (j = 0; j < i; j++)
			scanf("%lf", &bm[j]);
		S = PI * d2 * L2;//������ڻ������
		A = PI * d0 * d0 * 0.25;//�����������ڱ����
		for (j = 0; j < i; j++)
		{
			tJ[j] = (aJ[j] + aC[j]) / 2;
			printf("ƽ���¶�����Ϊ��%lf  ",tJ[j]);
		}
		printf("\n");
		printf("���������������Թ����Ŀ������ܶ�:>");
		for (j = 0; j < i; j++)
			scanf("%lf", &rou[j]);
		printf("���������������Թ����Ķ�ѹ������:>");
		for (j = 0; j < i; j++)
			scanf("%lf", &cp[j]);
		printf("���������������Թ�����ճ�ȣ�����Ҫ�������ı���:>");
		for (j = 0; j < i; j++)
			scanf("%lf", &u[j]);
		printf("���������������Թ����ĵ���ϵ��������Ҫ�������ı���:>");
		for (j = 0; j < i; j++)
			scanf("%lf", &n[j]);
		for (j = 0; j < i; j++)
		{
			tJ[j] = (aJ[j] + aC[j]) / 2;//����ƽ���¶�
			tC[j] = (bm[j] - tJ[j]);//�����²�
			V[j] = C0 * 3600 * A * (sqrt(2 * kb[j] * 1000 / 1.029));//����ƽ������
			W[j] = V[j] * rou[j] / 3600;//������������
			Q[j] = W[j] * cp[j] * (aC[j] - aJ[j]);//���㴫������
			z[j] = Q[j]*1000 / (S * tC[j]);//�����������ϵ��
			U[j] = V[j] / (A * 3600);//��������
			Nu[j] = z[j] * d2 / (n[j] * 0.01);//����Nu
			Re[j] = U[j] * d2 * rou[j] * 100000 / u[j];//����Re
			Pr[j] = cp[j] * u[j] * 0.001 / n[j];//����Pr
		}
		printf("----------------------------------------------------------\n");
		printf("�������S=%lf   �������ڱ����A=%lf\n", S, A);
		printf("ƽ���¶�(��)����Ϊ��");
		for (j = 0; j < i; j++)
			printf("%lf  ", tJ[j]);
		printf("\n");
		printf("�²�(��)����Ϊ��");
		for (j = 0; j < i; j++)
			printf("%lf  ", tC[j]);
		printf("\n");
		printf("ƽ������(m3/h)����Ϊ��");
		for (j = 0; j < i; j++)
			printf("%lf  ", V[j]);
		printf("\n");
		printf("��������(kg/s)����Ϊ��");
		for (j = 0; j < i; j++)
			printf("%lf  ", W[j]);
		printf("\n");
		printf("��������(kw)����Ϊ��");
		for (j = 0; j < i; j++)
			printf("%lf  ", Q[j]);
		printf("\n");
		printf("��������ϵ��(W/(m2 * ��))����Ϊ��");
		for (j = 0; j < i; j++)
			printf("%lf  ", z[j]);
		printf("\n");
		printf("����(m/s)����Ϊ��");
		for (j = 0; j < i; j++)
			printf("%lf  ", U[j]);
		printf("\n");
		printf("Nu����Ϊ��");
		for (j = 0; j < i; j++)
			printf("%lf  ", Nu[j]);
		printf("\n");
		printf("Re����Ϊ��");
		for (j = 0; j < i; j++)
			printf("%lf  ", Re[j]);
		printf("\n");
		printf("Pr����Ϊ��");
		for (j = 0; j < i; j++)
			printf("%lf  ", Pr[j]);
		printf("\n");
		printf("�Ƿ�����ǿ�������ֵ��������1����������0��������:>");
		scanf("%d", &cho);
		if (cho == 0)
			;
		else
		{
			printf("������Ҫ�������ͨ�����ݵ�������1-6��:>");
			scanf("%d", &i);
			printf("����������%d�������¶�:>", i);
			for (j = 0; j < i; j++)
				scanf("%lf", &aJ[j]);
			printf("����������%d�������¶�:>", i);
			for (j = 0; j < i; j++)
				scanf("%lf", &aC[j]);
			printf("���Դ�����%d���װ�ѹ��(kpa):>", i);
			for (j = 0; j < i; j++)
				scanf("%lf", &kb[j]);
			printf("���Դ�����%d�������¶�:>", i);
			for (j = 0; j < i; j++)
				scanf("%lf", &bm[j]);
			S = PI * d3 * L2;//������ڻ������
			A = PI * d0 * d0 * 0.25;//�����������ڱ����
			for (j = 0; j < i; j++)
			{
				tJ[j] = (aJ[j] + aC[j]) / 2;
				printf("ƽ���¶�����Ϊ�� % lf  ",tJ[j]);
			}
			printf("���������������Թ����Ŀ������ܶ�:>");
			for (j = 0; j < i; j++)
				scanf("%lf", &rou[j]);
			printf("���������������Թ����Ķ�ѹ������:>");
			for (j = 0; j < i; j++)
				scanf("%lf", &cp[j]);
			printf("���������������Թ�����ճ�ȣ�����Ҫ�������ı���:>");
			for (j = 0; j < i; j++)
				scanf("%lf", &u[j]);
			printf("���������������Թ����ĵ���ϵ��������Ҫ�������ı���:>");
			for (j = 0; j < i; j++)
				scanf("%lf", &n[j]);
			for (j = 0; j < i; j++)
			{
				tJ[j] = (aJ[j] + aC[j]) / 2;//����ƽ���¶�
				tC[j] = (bm[j] - tJ[j]);//�����²�
				V[j] = C0 * 3600 * A * (sqrt(2 * kb[j] * 1000 / 1.029));//����ƽ������
				W[j] = V[j] * rou[j] / 3600;//������������
				Q[j] = W[j] * cp[j] * (aC[j] - aJ[j]);//���㴫������
				z[j] = Q[j] * 1000 / (S * tC[j]);//�����������ϵ��
				U[j] = V[j] / (A * 3600);//��������
				Nu[j] = z[j] * d3 / (n[j] * 0.01);//����Nu
				Re[j] = U[j] * d3 * rou[j] * 100000 / u[j];//����Re
				Pr[j] = cp[j] * u[j] * 0.001 / n[j];//����Pr
			}
			printf("----------------------------------------------------------\n");
			printf("�������S=%lf   �������ڱ����A=%lf\n", S, A);
			printf("ƽ���¶�(��)����Ϊ��");
			for (j = 0; j < i; j++)
				printf("%lf  ", tJ[j]);
			printf("\n");
			printf("�²�(��)����Ϊ��");
			for (j = 0; j < i; j++)
				printf("%lf  ", tC[j]);
			printf("\n");
			printf("ƽ������(m3/h)����Ϊ��");
			for (j = 0; j < i; j++)
				printf("%lf  ", V[j]);
			printf("\n");
			printf("��������(kg/s)����Ϊ��");
			for (j = 0; j < i; j++)
				printf("%lf  ", W[j]);
			printf("\n");
			printf("��������(kw)����Ϊ��");
			for (j = 0; j < i; j++)
				printf("%lf  ", Q[j]);
			printf("\n");
			printf("��������ϵ��(W/(m2 * ��))����Ϊ��");
			for (j = 0; j < i; j++)
				printf("%lf  ", z[j]);
			printf("\n");
			printf("����(m/s)����Ϊ��");
			for (j = 0; j < i; j++)
				printf("%lf  ", U[j]);
			printf("\n");
			printf("Nu����Ϊ��");
			for (j = 0; j < i; j++)
				printf("%lf  ", Nu[j]);
			printf("\n");
			printf("Re����Ϊ��");
			for (j = 0; j < i; j++)
				printf("%lf  ", Re[j]);
			printf("\n");
			printf("Pr����Ϊ��");
			for (j = 0; j < i; j++)
				printf("%lf  ", Pr[j]);
			printf("\n");
		}
	} while (i);
	return 0;
}