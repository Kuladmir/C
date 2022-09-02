#define _CRT_SECURE_NO_WARNINGS 1
//函数实现逆序输出一个字符串内容
#include<stdio.h>
#include<string.h>
void reverse(char* a)
{
	int b = strlen(a);
	char* left = a;
	char* right = a + b - 1;
	char tmp;
	while (left < right)
	{
		tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
int main()
{
	char a[100];
	gets_s(a);
	reverse(a);
	printf("%s\n", a);
	return 0;
}