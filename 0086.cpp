#define _CRT_SECURE_NO_WARNINGS 1
//�ж�һ���ַ����Ƿ�Ϊ��һ���ַ�����ת����
#include<stdio.h>
#include<string.h>
int cmp(char *a, char *b)
{
	int len1 = strlen(a);
	int len2 = strlen(b);
	if (len1 == len2)
	{
		strncat(a, a, len1);//׷���ַ�������
		char* k = strstr(a, b);//�����Ӵ�����
		if (k == NULL)//δ�ҵ�����һ����ָ��
			return 0;
		else
			return 1;
	}
	else
		return 0;
}
int main()
{
	char a[20];
	char b[20];
	int sz;
	printf("����һ������С��10���ַ���\n");
	scanf("%s",a);
	printf("����һ������С��10���ַ���\n");
	scanf("%s", b);
	int ret = cmp(a, b);
	if (ret == 1)
		printf("Yes\n");
	else
		printf("No\n");
	return 0;
}