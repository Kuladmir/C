#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,k,a[1000];
	k=0;
	printf("                       �������������1000���ڵ�����\n");
	printf("                             �㿪��Ϊ���г���\n");
	for(i=0;i<1000;i++)
	{
		a[i]=i+1;
	}
	a[0]=0;
	for(i=0;i<999;i++)
	{
		for(j=i+1;j<1000;j++)
		{
			if(a[i]!=0&&a[j]!=0)
			{
				if(a[j]%a[i]==0)
				{
					a[j]=0;
				}
			}
		}
	}
	printf("     100�������е�����Ϊ������ʾ\n");
	for(i=0;i<1000;i++)
	{
		if(a[i]!=0)
		{
			printf("%4d",a[i]);
			k++;
		}
		if(k%10==0)
		{
			printf("\n");
		}
	}
	printf("\n");
	return 0;
}

