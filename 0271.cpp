//�ж�����-��ϰ
#include<stdio.h>
#include<math.h>
int main()
{
	int i, con;
	printf("��������Ҫ�жϵ���:>");
	scanf("%d", &con);
	for (i = 2; i <= sqrt(con); i++)
	{
		if (con % i == 0)
		{
			printf("�������������\n");
			break;
		}
	}
	if (i > sqrt(con))
		printf("�����������\n");
	return 0;
}