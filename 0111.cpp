#define _CRT_SECURE_NO_WARNINGS 1//���Կ���INT_MAX�ֽڴ�С��λ��
#include<stdio.h>
#include<string.h>
#include<errno.h>
#include<stdlib.h>
int main()
{
	int* p = (int*)malloc(40);
	if (p == NULL)
		printf("%s\n", strerror(errno));
	else
		printf("���ٳɹ�\n");
	int* p2 = (int*)calloc(5, 4);
	int* p3 = (int*)realloc(p, 40);
	free(p3);
	return 0;
}