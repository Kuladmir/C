//����3+33+333+3333����
#include<stdio.h>
#define N 3
int main()
{
	int i = N;
	int con, count=0, j, tmp=0;
	printf("������Ҫ������:>");
	scanf("%d", &con);
	for (j = 0; j < con; j++)
	{
		tmp = tmp * 10 + i;
		count += tmp;
	}
	printf("���Ϊ��%d\n", count);
	return 0;
}