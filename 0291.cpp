//��������
#include<stdio.h>
int main()
{
	printf("������10����:>");
	int arr[10], i, search=0, count=0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("\n");
	printf("������Ҫ���ҵ���:>");
	scanf("%d", &search);
	printf("\n");
	for (i = 0; i < 10; i++)
	{
		if (arr[i] == search)
		{
			count++;
			printf("�ҵ����ǵ�%d������Ŀǰ���ҵ�%d��;", (i + 1), count);
		}
	}
	printf("\n");
	printf("��ɣ�����ҵ���%d����\n", count);
	return 0;
}