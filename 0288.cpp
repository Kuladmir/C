//�����ַ���
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
	printf("������һ������С��%d���ַ���:>", N);
	gets_s(a);
	unsigned int len = my_strlen(a);
	printf("������Ҫ�����Ĵ���:>");
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
	printf("����%u�ε��ַ���Ϊ:> %s", copy_times, a);
	return 0;
}