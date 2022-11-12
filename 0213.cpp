#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	printf("请输入对应星期的首字母(大写):>");
	char a, b;
	scanf("%c", &a);
	getchar();
	switch (a)
	{
	case 'M':
		printf("星期一Monday\n");
		break;
	case 'T':
		printf("请输入第二个字母:>");
		scanf("%c", &b);
		if (b == 'u')
			printf("星期二Tuesday\n");
		else if (b == 'h')
			printf("星期四Thursday\n");
		else
			printf("Unknown\n");
		break;
	case 'W':
		printf("星期三Wednesday\n");
		break;
	case 'F':
		printf("星期五Friday\n");
		break;
	case 'S':
		printf("请输入第二个字母:>");
		scanf("%c", &b);
		if (b == 'a')
			printf("星期六Saturday\n");
		else if (b == 'u')
			printf("星期天Sunday\n");
		else
			printf("Unknown\n");
		break;
	default:
		printf("Error\n");
	}
	return 0;
}
