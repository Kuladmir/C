//�ҵ�strcmp����
#include<stdio.h>
#define N 100
void my_strlen(char* a, char* b)
{
	while (*a == *b)
	{
		if (*a == '\0')
		{
			printf("�����ַ�����ͬ\n");
		}
		a++; 
		b++;
	}
	if (*a > *b)
		printf("�ַ���a����b����Ϊ%c > %c\n", *a, *b);
	else
		printf("�ַ���aС��b����Ϊ%c < %c\n", *a, *b);
}
int main()
{
	char a[N], b[N];
	printf("�������һ������С��%d���ַ���:>", N);
	gets_s(a);
	printf("������ڶ�������С��%d���ַ���:>", N);
	gets_s(b);
	my_strlen(a, b);
	return 0;
}