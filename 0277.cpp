//쳲���������-��ϰ
#include<stdio.h>
int main()
{
	int con, i, j=1, k=1, a=0;
	printf("������Ҫ����ڼ���쳲��������е���:>");
	scanf("%d", &con);		
	if (con == 1 || con == 2)
			printf("��%d������%d\n", con, 1);
	else
		for (i = 3; i < con + 1; i++)
		{

			a = j + k;
			k = j;
			j = a;
		} 
	printf("��%d������%d\n", con, a);
	return 0;
}