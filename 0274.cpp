//������С�����������Լ��-��ϰ
#include<stdio.h>
int main()
{
	int i, j, k, con, a, b;
	do
	{
		printf("������һ����(0����):>");
		scanf("%d", &con);
		if (con != 0)
		{
			printf("������Ҫ�����������:>");
			scanf("%d%d", &i, &j);
			a = i;
			b = j;
			do
			{
				k = i % j;
				i = j;
				j = k;
			} while (j);
			printf("���Լ����%d����󹫱�����%d\n", i, a * b / i);
		}
	} while (con);
}