#define _CRT_SECURE_NO_WARNINGS 1
//ע�ⶨ���ʱ���滻��ϵ
#include<stdio.h>
#define Pi(x) x*x
#define Tr(x) x*5
//�޸�1 ����1
#define Tr1(x) (x)*5
#define ku(x) x+x
//�޸�2 ����
#define ku1(x) (x+x)
int main()
{
	int a = 10;
	int b = Pi(a);
	int c = Tr(5 + 1); //����1. ��������滻��ϵ
	int d = 10 * ku(a);//����2. ��������滻��ϵ
	printf("b = %d\n", b);
	printf("c = %d\n", c);//Ӧ����30����
	printf("d = %d\n", d);//Ӧ����200����
	// �޸�1 ����2
	int c1 = Tr(6);
	int c2 = Tr1(5 + 1);
	printf("c1 = %d\n", c1);
	printf("c2 = %d\n", c2);
	//�޸�2
	int d1 = 10 * ku1(a);
	printf("d1 = %d\n", d1);
	return 0;
}