//不使用函数完成字符串长度计算

#include<stdio.h>
#include<assert.h>
#include<string.h>

void lenchar(char* a)
{
	assert(a != NULL);
	int coun = 0;
	char* b = a;
	while (*a != '\0')
	{
		coun++;
		a++;
	}
	printf("字符串%s长度为%d", b, coun);
}

int main()
{
	char a[50];
	gets_s(a);
	lenchar(a);
	return 0;
}