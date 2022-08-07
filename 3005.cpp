#include<stdio.h>
int main()
{
	int a[11];
	int i,j,count;
	printf("请输入11个数字，其中有5个数字出现两次，一个数字出现一次\n");
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
			printf("找到了，是%d\n",a[i]);
			break;
		}
	}
	return 0;
}

