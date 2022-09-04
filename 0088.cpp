#define _CRT_SECURE_NO_WARNINGS 1
//三步翻转法 - 左旋字符串
#include<stdio.h>
#include<string.h>
#include<assert.h>//断言
void change(char* a, char* b)
{
	char t;
	while (a < b)
	{
		t = *a;
		*a = *b;
		*b = t;
		a++;
		b--;
	}
}
void move(char* a, int b)
{
	assert(a != NULL);//断言函数：如果条件为假，则终止程序进行
	int len = strlen(a),i;
	assert(b <= len);
	change(a, a + b - 1);
	change(a + b, a + len - 1);
	change(a, a + len - 1);
	printf("%s", a);
}
int main()
{
	char a[20];
	int b;
	printf("请输入一个长度20以内的字符串\n");
	gets_s(a);
	printf("请输入旋转次数:>");
	scanf("%d", &b);
	move(a, b);
	return 0;
}