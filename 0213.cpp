#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	printf("�������Ӧ���ڵ�����ĸ(��д):>");
	char a, b;
	scanf("%c", &a);
	getchar();
	switch (a)
	{
	case 'M':
		printf("����һMonday\n");
		break;
	case 'T':
		printf("������ڶ�����ĸ:>");
		scanf("%c", &b);
		if (b == 'u')
			printf("���ڶ�Tuesday\n");
		else if (b == 'h')
			printf("������Thursday\n");
		else
			printf("Unknown\n");
		break;
	case 'W':
		printf("������Wednesday\n");
		break;
	case 'F':
		printf("������Friday\n");
		break;
	case 'S':
		printf("������ڶ�����ĸ:>");
		scanf("%c", &b);
		if (b == 'a')
			printf("������Saturday\n");
		else if (b == 'u')
			printf("������Sunday\n");
		else
			printf("Unknown\n");
		break;
	default:
		printf("Error\n");
	}
	return 0;
}
