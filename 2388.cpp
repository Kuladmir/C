#include<Stdio.h>//���ַ���������
int  main()
{
	int arr[10];
	int left,right,mid,i,b,c;
	printf("����10����С������������������\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	b=0;
	for(i=0;i<9;i++)
	{
		if(arr[i]<=arr[i+1])
			b++;
	}
	if(b!=9)
		printf("��������\n");
	else//���ַ�����
	{
		printf("������Ҫ�ҵ�����\n");
		scanf("%d",&b);
		c=sizeof(arr)/sizeof(arr[0]);
		left=0;
		right=c-1;
		while(left<=right)
		{
			mid=(left+right)/2;
			if(arr[mid]>b)
			{
				right=mid-1;
			}
			else if(arr[mid]<b)
			{
				left=mid+1;
			}
			else
			{
				printf("�ҵ��ˣ��ǵ�%d��\n",mid+1);
				break;
			}
		}
		if(left>=right)
		{
			printf("δ�ҵ�\n");
		}
	}
	return 0;
}





