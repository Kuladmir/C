#include<stdio.h>
int main()
{
	int a[11];
	int i,j,count;
	printf("������11�����֣�������5�����ֳ������Σ�һ�����ֳ���һ��\n");
	for(i=0;i<11;i++)
		scanf("%d",&a[i]);
	for(i=0;i<11;i++)
	{
		for(j=0,count=0;j<11;j++)
		{
			if(a[i]==a[j])
				count++;
		}
		if(count == 1)
		{
			printf("�ҵ��ˣ���%d\n",a[i]);
			break;
		}
	}
	return 0;
}

