#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	printf("有5个人坐在一起，问第五个人多少岁？他说比第4个人大2岁。问第4个人岁数，"
		"他说比第3个人大2岁。问第三个人，又说比第2人大两岁。问第2个人，"
		"说比第一个人大两岁。最后问第一个人，他说是10岁。请问第五个人多大？\n");
	int a, b, c, d, e;
	a = 10;
	b = a + 2;
	c = b + 2;
	d = c + 2;
	e = d + 2;
	printf("第五个人年龄是%d岁\n", e);
	return 0;
}