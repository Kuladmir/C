//����100���ڣ��ܱ�17�����������

#include<stdio.h>
int main()
{
	int i = 0, count = 0;
	for (i = 0; i < 101; i++)
	{
		if (i %17 == 0)
			count = i;
	}
	printf("�ܱ�17�����������:> %d", count);
	return 0;
}