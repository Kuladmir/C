#include<stdio.h>
int count_one(int a)
{
	int count=0;
	int i;
	for(i=0;i<32;i++)
	{
		if((a>>i)&1 == 1)
			count++;
	}
	return count;
}
int main()
{
	int a,b;
	scanf_s("%d",&a);
	b=count_one(a);
	printf("�����ֵĶ����Ʋ�����%d��1\n",b);
	return 0;
}
