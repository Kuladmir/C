//左旋字符串
#include<stdio.h>
#define N 100
unsigned int my_strlen(char* a)
{
	unsigned int count = 0;
	while (*a++ != '\0')
		count++;
	return count;
}
int main()
{
	char a[N], tmp;
	printf("请输入一个长度小于%d的字符串:>", N);
	gets_s(a);
	unsigned int len = my_strlen(a);
	printf("请输入要左旋的次数:>");
	unsigned int times, j, copy_times;
	scanf("%u", &times);
	printf("%u\n", len);
	copy_times = times;
	times = times % len;
	while (times)
	{
		tmp = *a;
		for (j = 1; j < len; j++)
			*(a + j - 1) = *(a + j);
		*(a + j - 1) = tmp;
		times--;
	}
	printf("左旋%u次的字符串为:> %s", copy_times, a);
	return 0;
}