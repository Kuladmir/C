#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i, j, k;
	printf("һ�������ܳ��Լ���9��ɵ���\n");
	printf("��������ȫΪ9����˵�����ܱ�����\n");
	printf("������һ������:>");
	scanf("%d", &j);
	for (i = 9;; i = i * 10 + 9)
	{
		if (i % j == 0)
		{
			printf("%d�ܱ�%d����\n", j, i);
			break;
		}
	}
	return 0;
}