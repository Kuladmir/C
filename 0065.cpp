#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int arr(int x, int y)
{
	return x + y;
}
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	int c = arr(a, b);
	printf("%p	", &arr);//��ӡ������ַ
	printf("%p\n", arr);//��ӡ������ַ
	int (*p)(int, int) = arr;//����ָ��
	printf("%d\n", (*p)(a, b));//�����ú���
	return 0;
}