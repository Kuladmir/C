//��һ�����в���һ����������ָ��δ֪�ͳ��ִ�
#include<stdio.h>
#include<windows.h>
#define N 10 //˵����Ĵ�С
int main()
{
	double a[N], ser;
	int i, count = 0, learn[N] = {0}, j=0;
	printf("��ʼ���������������%d������:>", N);
	for (i = 0; i < N; i++)
		scanf("%lf", &a[i]);
	printf("������Ҫ���ҵ�����:>");
	scanf("%lf", &ser);
	for (i = 0; i < N; i++)
	{
		if (a[i] == ser)
		{
			learn[j++] = i + 1;
			count++;
		}
	}
	printf("������ɣ����ڲ��ҡ���\n");
	Sleep(2000);
	printf("��ɡ����Ϊ:\n");
	if(a[0]==0)		
		printf("%.4lfδ����\n", ser);
	else
	{
		printf("%.4lf�����ڣ�", ser);
		for (i = 0; i < N; i++)
		{
			if (learn[i] != 0)
				printf("��%dλ ", learn[i]);
			else
				break;
		}
		printf("��һ��������%d��\n", count);
	}
	return 0;
}