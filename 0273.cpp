//˳�����ֲ���-��ϰ
#include<stdio.h>
#define N 10 // �ɵ���
int main()
{
	int a[N];
	int i, con, k;
	do
	{		
		k = 1;	
		printf("��������������(0��ʾ����):>");
		scanf("%d", &con);
		printf("������һ������%d�����ֵ�˳��(��С����)��:>",N);
		for (i = 0; i < N; i++)
			scanf("%d", &a[i]);
		if (k == 1)
		{
			int left = 0, right = sizeof(a) / sizeof(a[0]) - 1, mid, ser;
			printf("��������Ҫ���ҵ���:>");
			scanf("%d", &ser);
			do
			{
				mid = (left + right) / 2;
				if (a[mid] > ser)
					right = mid - 1;
				if (a[mid] < ser)
					left = mid + 1;
				if (a[mid] == ser)
				{
					printf("�ҵ��ˣ��ǵ�%d��\n", mid + 1);
					break;
				}
			} while (left <= right);
			if (left > right)
				printf("δ�ҵ�\n");
		}
	} while (con);
	return 0;
}
