//我的strcmp函数
#include<stdio.h>
#define N 100
void my_strlen(char* a, char* b)
{
	while (*a == *b)
	{
		if (*a == '\0')
		{
			printf("两个字符串相同\n");
		}
		a++; 
		b++;
	}
	if (*a > *b)
		printf("字符串a大于b，因为%c > %c\n", *a, *b);
	else
		printf("字符串a小于b，因为%c < %c\n", *a, *b);
}
int main()
{
	char a[N], b[N];
	printf("请输入第一个长度小于%d的字符串:>", N);
	gets_s(a);
	printf("请输入第二个长度小于%d的字符串:>", N);
	gets_s(b);
	my_strlen(a, b);
	return 0;
}