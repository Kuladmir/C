#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>//ʵ��strlen()  3�ַ�ʽ
#include<assert.h>
int my_strlen1(const char* a)//1.�ݹ鷽ʽ
{
	assert(a != NULL);
	if (*a != '\0')
		return 1 + my_strlen1(a + 1);
	else
		return 0;
}
int my_strlen2(const char* a)//2.ָ��ʽ
{
	assert(a != NULL);
	char* p = (char*)a;
	while (*p != '\0')
		p++;
	return p - a;
}
int my_strlen3(const char* a)//3.������
{
	assert(a != NULL);
	int b = 0;
	while (*a != '\0')
	{
		a++;
		b++;
	}
	return b;
}
int main()
{
	char a[20] = "kuladmir";
	int ret = my_strlen1(a);
	int ret2 = my_strlen2(a);
	int ret3 = my_strlen3(a);
	printf("%d  %d  %d\n", ret,ret2,ret3);
	return 0;
}