#include<stdio.h>
int main()
{
	double a=100,b=100;
	int i,j;
	printf("С���100m���£�ÿ�ε���ĸ߶�Ϊ֮ǰ�����һ��\n");
	printf("ͨ�����뵯��Ĵ��������������Ӧ�ĵ���߶Ⱥ��˶��ܾ���\n");
	scanf("%d",&j);
	if(j==1)
	{
		a=a/2;
		b=b+a;
	}
	else
	{	
		a=50;
		b=150;
	for(i=1;i<j;i++)
	{
        b=b+a;
		a=a/2;
		b=b+a;
	}
	}
	printf("����ĸ߶�%lf,�˶��ܾ���%lf\n",a,b);
	return 0;
}


