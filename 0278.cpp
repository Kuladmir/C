//���ַ�������-��ϰ
#include<stdio.h>
int main()
{
	char a[20];
	printf("������һ������С��20���ַ���:>");
	gets_s(a);
	int count = 0, i=0;
	while (a[i] != '\0')
	{
		count++;
		i++;
	}
	printf("�ַ���%s�ĳ���Ϊ%d\n", a, count);
	return 0;
}