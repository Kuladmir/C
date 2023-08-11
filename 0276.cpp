//在一个表中查找一个数，并且指出未知和出现次
#include<stdio.h>
#include<windows.h>
#define N 10 //说明表的大小
int main()
{
	double a[N], ser;
	int i, count = 0, learn[N] = {0}, j=0;
	printf("开始创建这个表，请输入%d个数字:>", N);
	for (i = 0; i < N; i++)
		scanf("%lf", &a[i]);
	printf("请输入要查找的数字:>");
	scanf("%lf", &ser);
	for (i = 0; i < N; i++)
	{
		if (a[i] == ser)
		{
			learn[j++] = i + 1;
			count++;
		}
	}
	printf("输入完成，正在查找……\n");
	Sleep(2000);
	printf("完成。结果为:\n");
	if(a[0]==0)		
		printf("%.4lf未出现\n", ser);
	else
	{
		printf("%.4lf出现在：", ser);
		for (i = 0; i < N; i++)
		{
			if (learn[i] != 0)
				printf("第%d位 ", learn[i]);
			else
				break;
		}
		printf("，一共出现了%d次\n", count);
	}
	return 0;
}