//����һ��int���У������������м���1
#include<stdio.h>
int main()
{
	int i, count = 0, j = 0, con;
	printf("������һ������:>");
	scanf("%d", &i);
	con = i;
	for (j = 0; j < 32; j++)
	{
		if ((i & 1) == 1)
			count++;
		i=i>>1;
	}
	printf("%d�Ķ���������(����)����%d��1\n", con, count);
	return 0;
}