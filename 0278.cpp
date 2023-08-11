//求字符串长度-练习
#include<stdio.h>
int main()
{
	char a[20];
	printf("请输入一个长度小于20的字符串:>");
	gets_s(a);
	int count = 0, i=0;
	while (a[i] != '\0')
	{
		count++;
		i++;
	}
	printf("字符串%s的长度为%d\n", a, count);
	return 0;
}