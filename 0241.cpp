#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	printf("ĳ����˾���ù��õ绰�������ݣ���������λ���������ڴ��ݹ������Ǽ��ܵģ����ܹ������£� "
		"ÿλ���ֶ�����5,Ȼ���úͳ���10��������������֣�"
		"�ٽ���һλ�͵���λ�������ڶ�λ�͵���λ������\n");
	printf("����������:>");
	int se[4],i;
	for (i = 0; i < 4; i++)
		scanf("%d", &se[i]);
	for (i = 0; i < 4; i++)
	{
		se[i] += 5;
		se[i] = se[i] % 10;
	}
	for (i = 0; i < 4; i++)
		printf("%d ", se[i]);
	printf("\n");
	return 0;
}