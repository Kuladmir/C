//��ʹ�ú�������ַ������ȼ���

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
	printf("�ַ���%s����Ϊ%d", b, coun);
}

int main()
{
	char a[50];
	gets_s(a);
	lenchar(a);
	return 0;
}